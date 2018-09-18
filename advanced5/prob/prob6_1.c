#include <stdio.h>

typedef struct {
    float x;
    float y;
} Vector2D;

int main(void) {
    Vector2D v1, v2;

    printf("v1.x = ");
    scanf("%f", &(v1.x));
    printf("v1.y = ");
    scanf("%f", &(v1.y));
    printf("v2.x = ");
    scanf("%f", &(v2.x));
    printf("v2.y = ");
    scanf("%f", &(v2.y));

    printf("(%f, %f) + (%f, %f) = (%f, %f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x+v2.x), (v1.y+v2.y));
    printf("(%f, %f) - (%f, %f) = (%f, %f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x-v2.x), (v1.y-v2.y));

    return 0;
}
