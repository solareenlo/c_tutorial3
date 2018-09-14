#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(void) {
    int angle;
    double rad;

    printf("角度を入力してください(0~360)：");
    scanf("%d", &angle);

    rad = PI * (double)angle / 180.0;

    printf("sin(%d) = %lf\n", angle, sin(rad));
    printf("cos(%d) = %lf\n", angle, cos(rad));
    printf("tan(%d) = %lf\n", angle, tan(rad));

    return 0;
}
