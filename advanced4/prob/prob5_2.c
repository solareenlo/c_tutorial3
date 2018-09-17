// 文字列関数を使わずに2つ文字列を結合する
#include <stdio.h>

int main(void) {
    char s1[128], s2[128], s[256];
    int i = 0, j = 0;
    int k, l = 0;

    printf("文字列１：");
    scanf("%s", s1);
    printf("文字列２：");
    scanf("%s", s2);

    while(s1[i] != '\0') {
        i++; // 文字列s1が何文字あるか数える
    }
    printf("%d\n", i);

    while(s2[j] != '\0') {
        j++; // 文字列s1が何文字あるか数える
    }
    printf("%d\n", j);

    for(k = 0; k < i; k++) {
        s[k] = s1[k]; // 配列sの先頭から文字列s1の中身を代入
    }
    for(k = i; k < i+j; k++) {
        s[k] = s2[l]; // 文字列s1の中身が入っている配列sの後ろに、文字列s2の中身を代入
        l++;
    }

    s[i+j] = '\0'; //配列sの一番後ろにNULLを代入

    printf("%s\n", s);

    return 0;
}
