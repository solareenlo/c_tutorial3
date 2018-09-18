#include <stdio.h>
#include <string.h>

union data {
    int n;
    double d;
    char s[16];
};

int main(void) {
    union data d[3];
    d[0].n = 1;
    d[1].d = 3.14;
    strcpy(d[2].s, "World");

    printf("%d, %f, %s\n", d[0].n, d[1].d, d[2].s);

    return 0;
}
