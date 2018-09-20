// キーボードから入力した文字をdata.txtに1行ずつ書き出す
// ただし、"q"が入力されると終了する
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 256

int main(void) {
    char s[SIZE];
    FILE* file;
    file = fopen("./data.txt", "w");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    s[0] = '\n';
    while(1) {
        printf("文字列を入力してください：");
        scanf("%s", s);
        if(strcmp(s, "q") == 0) {
            break;
        }
        fprintf(file, "%s\n", s);
    }

    fclose(file);

    return 0;
}
