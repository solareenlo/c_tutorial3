#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array = NULL;
    int i;

    array = (int*)malloc(sizeof(int)*10);

    for(i = 0; i < 10; i++) {
        array[i] = i;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
