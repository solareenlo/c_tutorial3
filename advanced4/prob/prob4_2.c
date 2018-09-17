// 関数の引数にポインタを渡して、5つの乱数の2倍の数を表示
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void makerand();
void substitution(int*);
void show(int*);
void twotimes(int*);

int main(void) {
    int i;
    int a[5];
    int *p = NULL;

    makerand(); // 擬似乱数発生

    p = a; //ポインタpに配列aを紐付け

    substitution(p); // 配列aに乱数を代入
    printf("発生した乱数：\n");
    show(p);

    twotimes(p); // 配列aの値を２倍
    printf("２倍した数：\n");
    show(p);

    return 0;
}

void makerand() {
    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();
}

void substitution(int *p) {
    int i;

    for(i = 0; i < 5; i++) {
        *p = rand() % 10 + 1;
        p++;
    }
}

void show(int *p) {
    int i;

    for(i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void twotimes(int *p) {
    int i;

    for(i = 0; i < 5; i++) {
        *p *= 2;
        p++;
    }
}
