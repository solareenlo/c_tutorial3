// 入力したアルファベットの中にある小文字部分を大文字にして出力するよ
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, count;
    char moji[256];
    char j = 0xDF;

    printf("Input words:");
    scanf("%s", moji);

    for(count = 0; moji[count] != '\0'; ++count);
    printf("文字数：%d\n", count);

    for(i = 0; i < count; i++) {
        printf("%c", moji[i] & j);
    }
    printf("\n");

    return 0;
}
