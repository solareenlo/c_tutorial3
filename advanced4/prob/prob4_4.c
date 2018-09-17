#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *a = NULL;
    int i;

    a = (double*)malloc(sizeof(double)*6);

    for(i = 0; i < 6; i++) {
        a[i] = 0.1 * i;
    }

    for(i =0; i < 6; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}
