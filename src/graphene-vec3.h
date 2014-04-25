#ifndef __GRAPHENE_VECTORS_H__
#define __GRAPHENE_VECTORS_H__

#if !defined(GRAPHENE_H_INSIDE) && !defined(GRAPHENE_COMPILATION)
#error "Only graphene.h can be included directly."
#endif

#include "graphene-types.h"

G_BEGIN_DECLS

GRAPHENE_AVAILABLE_IN_1_0
graphene_vec3_t *       graphene_vec3_alloc             (void);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_free              (graphene_vec3_t       *v);
GRAPHENE_AVAILABLE_IN_1_0
graphene_vec3_t *       graphene_vec3_init              (graphene_vec3_t       *v,
                                                         float                  x,
                                                         float                  y,
                                                         float                  z);
GRAPHENE_AVAILABLE_IN_1_0
graphene_vec3_t *       graphene_vec3_init_from_vec3    (graphene_vec3_t       *v,
                                                         const graphene_vec3_t *src);
GRAPHENE_AVAILABLE_IN_1_0
graphene_vec3_t *       graphene_vec3_init_from_float   (graphene_vec3_t       *v,
                                                         const float           *src);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_to_float          (const graphene_vec3_t *v,
                                                         float                 *dest);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_add               (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_subtract          (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_multiply          (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_divide            (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
float                   graphene_vec3_dot               (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b);
GRAPHENE_AVAILABLE_IN_1_0
float                   graphene_vec3_length            (const graphene_vec3_t *v);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_normalize         (const graphene_vec3_t *v,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_min               (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);
GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_max               (const graphene_vec3_t *a,
                                                         const graphene_vec3_t *b,
                                                         graphene_vec3_t       *res);

GRAPHENE_AVAILABLE_IN_1_0
float                   graphene_vec3_get_x             (const graphene_vec3_t *v);
GRAPHENE_AVAILABLE_IN_1_0
float                   graphene_vec3_get_y             (const graphene_vec3_t *v);
GRAPHENE_AVAILABLE_IN_1_0
float                   graphene_vec3_get_z             (const graphene_vec3_t *v);

GRAPHENE_AVAILABLE_IN_1_0
void                    graphene_vec3_get_xy            (const graphene_vec3_t *v,
                                                         graphene_vec2_t       *res);

GRAPHENE_AVAILABLE_IN_1_0
const graphene_vec3_t * graphene_vec3_zero              (void);
GRAPHENE_AVAILABLE_IN_1_0
const graphene_vec3_t * graphene_vec3_one               (void);
GRAPHENE_AVAILABLE_IN_1_0
const graphene_vec3_t * graphene_vec3_x_axis            (void);
GRAPHENE_AVAILABLE_IN_1_0
const graphene_vec3_t * graphene_vec3_y_axis            (void);
GRAPHENE_AVAILABLE_IN_1_0
const graphene_vec3_t * graphene_vec3_z_axis            (void);

G_END_DECLS

#endif /* __GRAPHENE_VECTORS_H__ */
