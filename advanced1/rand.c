#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a, b;

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}
