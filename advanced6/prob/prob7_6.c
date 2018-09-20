// words.txtファイルに書き込まれている「,」で区切られた単語のうち、
// aから始まる単語をコンソールに出力します
// 文字は1文字ずつcに読み込んで、sに文字列として格納してます
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* file;
    int c, count = 0;
    char a[8], s[128];

    file = fopen("./words.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
    }

    printf("aから始まる単語\n");
    a[0] = '\0';
    s[0] = '\0';
    while((c=fgetc(file)) != EOF) {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            sprintf(a, "%c", c);
            strcat(s, a);
        }else if(c == ',') {
            if(s[0] == 'a') {
                printf("%s\n", s);
                count++;
            }
            s[0] = '\0';
        }
    }
    if(s[0] == 'a') {
        printf("%s\n", s);
        count++;
    }

    printf("--------\n");
    printf("個数：%d\n", count);

    fclose(file);
    return 0;
}
