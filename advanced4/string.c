#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10];
    int len;

    strcpy(s, "ABC"); // 右辺の文字列を左辺の文字列変数にコピー
    printf("s = %s\n", s);

    strcat(s, "def"); // 右辺の文字列を左辺の文字列変数に追加
    printf("s = %s\n", s);

    len = strlen(s); // 引数の文字列の長さを返す
    printf("文字列の長さ：%d\n", len);

    return 0;
}
