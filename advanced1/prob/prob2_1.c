#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, y1, x2, y2;
    double d;

    printf("1つ目のベクトルのX：");
    scanf("%lf", &x1);
    printf("1つ目のベクトルのY：");
    scanf("%lf", &y1);
    printf("2つ目のベクトルのX：");
    scanf("%lf", &x2);
    printf("2つ目のベクトルのY：");
    scanf("%lf", &y2);

    d = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0));
    printf("(%lf, %lf)と(%lf, %lf)の距離は%lfです\n", x1, y1, x2, y2, d);

    return 0;
}
