#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, num;
    int max=1, min=10;

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        num = rand() % 10 + 1;
        printf("%d ", num);
        if(max < num) {
            max = num;
        }
        if(min > num) {
            min = num;
        }
    }
    printf("\n");

    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);

    return 0;
}
