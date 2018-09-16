#include <stdio.h>

int main(void) {
    double d[3] = {0.1, 0.2, 0.3};
    double *p1 = NULL, *p2 = NULL;
    int i;

    p1 = d;
    p2 = d;

    printf("1つ目：配列を普通に表示\n");
    printf("2つ目：配列をポインタみたいに表示\n");
    printf("3つ目：ポインタを配列みたいに表示\n");
    printf("4つ目：ポインタを普通に表示\n");

    for(i = 0; i < 3; i++) {
        printf("%f %f %f %f\n", d[i], *(d+i), p1[i], *p2);
        p2++;
    }

    return 0;
}
