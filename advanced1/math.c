#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n = -2;
    double d1 = -2.5, d2 = 9.0;

    printf("%dの絶対値は%d\n", n, abs(n));
    printf("%fの絶対値は%f\n", d1, fabs(d1));
    printf("%fの２乗は%f\n", d2, pow(d2, 2));
    printf("%fの平方根は%f\n", d2, sqrt(d2));

    return 0;
}
