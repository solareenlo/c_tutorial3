#include <stdio.h>

int main(void) {
    char s[256];
    int i = 0;

    printf("文字列を入力：");
    scanf("%s", s);

    while(s[i] != '\0') {
        i++;
    }

    printf("文字列の長さ：%d文字\n", i);

    return 0;
}
