#include <stdio.h>

void show(int, int, int);

int main(void) {
    int a = 100;
    int b = 200;
    int *p = NULL;

    p = &a;
    printf("ポインターpにaのアドレスを代入すると、\n");
    show(a, b, *p);
    printf("\n");

    *p = 300;
    printf("ポインターpが指し示している値に300を代入すると、\n");
    show(a, b, *p);
    printf("\n");

    p = &b;
    printf("ポインターpにbのアドレスを代入すると、\n");
    show(a, b, *p);
    printf("\n");

    *p = 500;
    printf("ポインターpが指し示している値に500を代入すると、\n");
    show(a, b, *p);
    printf("\n");

    return 0;
}

void show(int a, int b, int c) {
    printf("a = %d, b = %d, *p = %d\n", a, b, c);
}
