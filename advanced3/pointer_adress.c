#include <stdio.h>

#define SIZE 5

int main(void) {
    int a1[SIZE];
    int a2[SIZE];
    int i;
    int* p1 = NULL;
    int* p2 = NULL;

    for(i = 0; i < SIZE; i++) {
        a1[i] = i;
        a2[i] = 'A' + i;
    }

    p1 = &a1[0];
    p2 = &a2[0];

    for(i = 0; i < SIZE; i++) {
        printf("a1[%d]=%d *(p1+%d)=%d ", i, a1[i], i, *(p1+i));
        printf("a2[%d]=%c *(p2+%d)=%c\n", i, a2[i], i, *(p2+i));
    }

    return 0;
}
