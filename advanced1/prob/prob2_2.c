#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    int i;
    int num;

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 4; i++) {
        num = rand() % 21 - 10;
        printf("%dつ目の数値：%d 絶対値%d\n", i+1, num, abs(num));
    }

    return 0;
}
