#ifndef __GRAPHENE_SIMD4F_COMMON_H__
#define __GRAPHENE_SIMD4F_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

static inline graphene_simd4f_t
graphene_simd4f_madd (graphene_simd4f_t m1,
                      graphene_simd4f_t m2,
                      graphene_simd4f_t a)
{
  return graphene_simd4f_add (graphene_simd4f_mul (m1, m2), a);
}

static inline graphene_simd4f_t
graphene_simd4f_sum (graphene_simd4f_t v)
{
  const graphene_simd4f_t s0 = graphene_simd4f_splat_x (v);
  const graphene_simd4f_t s1 = graphene_simd4f_add (s0, graphene_simd4f_splat_y (v));
  const graphene_simd4f_t s2 = graphene_simd4f_add (s1, graphene_simd4f_splat_z (v));
  const graphene_simd4f_t s3 = graphene_simd4f_add (s2, graphene_simd4f_splat_w (v));
  return s3;
}

static inline graphene_simd4f_t
graphene_simd4f_dot4 (graphene_simd4f_t a,
                      graphene_simd4f_t b)
{
  return graphene_simd4f_sum (graphene_simd4f_mul (a, b));
}

static inline graphene_simd4f_t
graphene_simd4f_dot3 (graphene_simd4f_t a,
                      graphene_simd4f_t b)
{
  const graphene_simd4f_t m = graphene_simd4f_mul (a, b);
  const graphene_simd4f_t s1 = graphene_simd4f_add (graphene_simd4f_splat_x (m),
                                                    graphene_simd4f_splat_y (m));
  const graphene_simd4f_t s2 = graphene_simd4f_add (s1,
                                                    graphene_simd4f_splat_z (m));
  return s2;
}

static inline graphene_simd4f_t
graphene_simd4f_dot2 (graphene_simd4f_t a,
                      graphene_simd4f_t b)
{
  const graphene_simd4f_t m = graphene_simd4f_mul (a, b);
  const graphene_simd4f_t s1 = graphene_simd4f_add (graphene_simd4f_splat_x (m),
                                                    graphene_simd4f_splat_y (m));
  return s1;
}

static inline graphene_simd4f_t
graphene_simd4f_length4 (graphene_simd4f_t v) {
  return graphene_simd4f_sqrt (graphene_simd4f_dot4 (v, v));
}

static inline graphene_simd4f_t
graphene_simd4f_length3 (graphene_simd4f_t v) {
  return graphene_simd4f_sqrt (graphene_simd4f_dot3 (v, v));
}

static inline graphene_simd4f_t
graphene_simd4f_length2 (graphene_simd4f_t v) {
  return graphene_simd4f_sqrt (graphene_simd4f_dot2 (v, v));
}

static inline graphene_simd4f_t
graphene_simd4f_normalize4 (graphene_simd4f_t v) {
  graphene_simd4f_t invlen = graphene_simd4f_rsqrt (graphene_simd4f_dot4 (v, v));
  return graphene_simd4f_mul (v, invlen);
}

static inline graphene_simd4f_t
graphene_simd4f_normalize3 (graphene_simd4f_t v) {
  graphene_simd4f_t invlen = graphene_simd4f_rsqrt (graphene_simd4f_dot3 (v, v));
  return graphene_simd4f_mul (v, invlen);
}

static inline graphene_simd4f_t
graphene_simd4f_normalize2 (graphene_simd4f_t v) {
  graphene_simd4f_t invlen = graphene_simd4f_rsqrt (graphene_simd4f_dot2 (v, v));
  return graphene_simd4f_mul (v, invlen);
}

#ifdef __cplusplus
}
#endif

#endif /* __GRAPHENE_SIMD4F_COMMON_H__ */
