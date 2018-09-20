// words.txtの内容を1文字ずつ読み込んで、「,」がきたら、改行に変換して、コンソールに表示
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

int main(void) {
    FILE* file;
    int c;

    file = fopen("./words.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF) {
        if(c == ',') {
            c = '\n';
            printf("%c", (char)c);
        } else {
            printf("%c", (char)c);
        }
    }

    return 0;
}
