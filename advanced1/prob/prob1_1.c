#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        printf("%d ", rand() % 10 + 1);
    }
    printf("\n");

    return 0;
}
