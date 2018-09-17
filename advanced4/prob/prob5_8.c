// キーボードから入力した3つの文字列のうち一番長い文字列を表示する
// もし同じ長さなら全て表示する
#include <stdio.h>
#include <string.h>

void scan(char*, int*);
int compare(int, int);

int main(void) {
    char s[3][256];
    int len[3], max = 0;
    int i;

    printf("文字列１：");
    scan(s[0], &len[0]); // 1つ目の文字列と文字の長さを取得
    printf("文字列２：");
    scan(s[1], &len[1]); // 2つ目の文字列と文字の長さを取得
    printf("文字列３：");
    scan(s[2], &len[2]); //3つ目の文字列と文字の長さを取得

    max = compare(len[0], len[1]);
    max = compare(len[1], len[2]);

    printf("もっとも長い文字列：\n");
    for(i = 0; i < max; i++) {
        if(max == len[i]) {
            printf("%s\n", s[i]);
        }
    }

    return 0;
}

void scan(char *s, int *len) {
    scanf("%s", s);
    *len = strlen(s);
}

int compare(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}
