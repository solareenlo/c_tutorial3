#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[128], s2[128], s[256];

    printf("文字列１：");
    scanf("%s", s1);

    printf("文字列２：");
    scanf("%s", s2);

    strcpy(s, s1); // 配列sに配列s1の中身をコピー
    strcat(s, s2); // 配列sの後ろに配列s2の中身を追加

    printf("結合した結果：");
    printf("%s\n", s);

    return 0;
}
