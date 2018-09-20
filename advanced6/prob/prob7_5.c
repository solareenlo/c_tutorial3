// テキストファイルに書かれている、「,」で区切られた整数値の合計を求める
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE* file;
    int c, sum = 0;
    char num[16], n[16];

    file = fopen("./nums.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
    }

    // テキストファイルを1文字ずつ読み込んで、出力する
    // 「,」だと改行する
    while((c=fgetc(file)) != EOF) {
        if(c == ',') {
            c = '\n';
            printf("%c", (char)c);
        } else {
            printf("%c", (char)c);
        }
    }

    // テキストファイルに書かれた数字を1文字ずつ文字列として読み込んで、
    // 「,」が来ると1つの数字としてint型でまとめてから、合計の値を求めてます
    fseek(file, 0, SEEK_SET);
    num[0] = '\0';
    n[0] = '\0';
    while((c=fgetc(file)) != EOF) {
        if(c == ',') {
            sum += atoi(num);
            num[0] = '\0';
        } else if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
            sprintf(n, "%c", c); // cには0~9までの数字が文字コード(0=48~57=9)で入っているので、%cで値を渡すと0~9になって、nに入ります。%dだと48~57がnに入ります。
            strcat(num, n); // 1つ1つの数字nを合体させてnumに入れる for 2桁以上の数
        }
    }
    sum += atoi(num);

    fclose(file);
    printf("--------\n");
    printf("合計：%d\n", sum);

    return 0;
}
