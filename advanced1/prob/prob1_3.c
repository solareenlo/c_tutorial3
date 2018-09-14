#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, l = 0, m = 0, n = 0, num;
    int a[5];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        a[i] = rand() % 100 + 1;
        printf("a[%d]=%d ", i, a[i]);
        if(a[i] >= 0 && a[i] < 10) {
            l += 1;
        } else if(a[i] >= 20 && a[i] <= 50) {
            m += 1;
        } else if(a[i] > 80) {
            n += 1;
        }
    }
    printf("\n");

    printf("20以上50以下の数：%d\n", m);
    printf("80より大きい数：%d\n", n);
    printf("0以上10未満の数：%d\n", l);

    return 0;
}
