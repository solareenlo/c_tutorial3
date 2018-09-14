#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, a, b;

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 6; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        printf("%d + %d = %d\n", a, b, a + b);
    }

    return 0;
}
