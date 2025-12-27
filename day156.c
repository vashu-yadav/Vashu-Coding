#include <stdio.h>
#include <math.h>

typedef enum {
    SHAPE_CIRCLE,
    SHAPE_RECTANGLE,
    SHAPE_TRIANGLE
} ShapeType;

typedef union {
    struct {
        double radius;
    } circle;
    struct {
        double width;
        double height;
    } rect;
    struct {
        double base;
        double height;
    } tri;
} ShapeData;

typedef struct {
    ShapeType type;
    ShapeData data;
} Shape;

double area(const Shape *s) {
    switch (s->type) {
        case SHAPE_CIRCLE:
            return 3.141592653589793 * s->data.circle.radius * s->data.circle.radius;
        case SHAPE_RECTANGLE:
            return s->data.rect.width * s->data.rect.height;
        case SHAPE_TRIANGLE:
            return 0.5 * s->data.tri.base * s->data.tri.height;
        default:
            return 0.0;
    }
}

int main(void) {
    Shape s1, s2, s3;

    s1.type = SHAPE_CIRCLE;
    s1.data.circle.radius = 5.0;

    s2.type = SHAPE_RECTANGLE;
    s2.data.rect.width = 4.0;
    s2.data.rect.height = 3.0;

    s3.type = SHAPE_TRIANGLE;
    s3.data.tri.base = 6.0;
    s3.data.tri.height = 2.0;

    printf("Circle area    = %.2f\n", area(&s1));
    printf("Rectangle area = %.2f\n", area(&s2));
    printf("Triangle area  = %.2f\n", area(&s3));

    return 0;
}
