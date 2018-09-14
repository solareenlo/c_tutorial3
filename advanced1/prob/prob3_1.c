// 入力した文字の中にある大文字部分を小文字にして出力するよ
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, count;
    char moji[256];
    char j = 0x20;

    printf("Input words:");
    scanf("%s", moji);

    for(count = 0; moji[count] != '\0'; ++count);
    printf("文字数：%d\n", count);

    for(i = 0; i < count; i++) {
        printf("%c", moji[i] | j);
    }
    printf("\n");

    return 0;
}
