// 引数のある関数ポインタの練習
#include <stdio.h>

int max(int, int);
int min(int, int);

int main(void) {
    int (*cmp)(int, int) = NULL; // cmpの初期化
    int a = 1, b = 20;

    cmp = max;
    printf("%dと%dのうち、最大のものは%d\n", a, b, cmp(a, b));

    cmp = min;
    printf("%dと%dのうち、最小のものは%d\n", a, b, cmp(a, b));

    return 0;
}

int max(int m, int n) {
    if(m > n) {
        return m;
    }
    return n;
}

int min(int m, int n) {
    if(m < n) {
        return m;
    }
    return n;
}
