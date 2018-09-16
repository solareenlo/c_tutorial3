// 動的メモリで配列を確保
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(void) {
    int* p1 = NULL;
    double *p2 = NULL;
    int i;

    p1 = (int*)malloc(sizeof(int)*SIZE);
    p2 = (double*)malloc(sizeof(double)*SIZE);

    for(i = 0; i < SIZE; i++) {
        p1[i] = i;
        p2[i] = i / 10.0;
    }

    for(i = 0; i < SIZE; i++) {
        printf("p1[%d]=%d, p2[%d]=%f\n", i, p1[i], i, p2[i]);
    }

    free(p1);
    free(p2);

    return 0;
}

