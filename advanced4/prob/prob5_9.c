// キーボードから入力した文字列を逆転させてものを動的配列に入れて表示
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[128];
    char *p = NULL;
    int i, len;

    printf("文字列を入力(最大16文字)：");
    scanf("%s", s);
    len = strlen(s);

    p = (char*)malloc(sizeof(char)*(len+1));

    for(i = 0; i < len; i++) {
        p[i] = s[len-i-1];
    }
    printf("%s\n", p);

    free(p);

    return 0;
}
