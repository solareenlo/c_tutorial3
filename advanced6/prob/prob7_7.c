// ポインタのポインタ・関数・動的構造体を用いて、最高得点を探す
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

typedef struct {
    char name[SIZE];
    int score;
} score_data;

void fileOpen(FILE**); // 得点が1行ずつ書かれているテキストファイルをopen
void getCount(FILE*, int*); // テキストファイルに何行書かれているかをget(これが構造体配列の個数になる)
int creatMemory(score_data**, int*); // 動的に構造体配列を準備
void setData(FILE*, score_data*); // スコアのデータを構造体配列に格納
void showData(score_data*, int*); // 全プレイヤーの名前と得点を1行ずつ表示
void searchMax(score_data*, int*); // 最高得点者をsearch
void freeMemory(score_data**); // メモリを解放

int main(void) {
    score_data *data = NULL;
    FILE* file;
    int i = 0, j;

    fileOpen(&file);
    getCount(file, &i);
    creatMemory(&data, &i);
    setData(file, data);
    showData(data, &i);
    searchMax(data, &i);
    freeMemory(&data);

    fclose(file);

    return 0;
}

void fileOpen(FILE** file) {
    *file = fopen("./score.txt", "r");
    if(*file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }
}

void getCount(FILE* file, int* i) {
    char line[SIZE];

    while(fgets(line, SIZE, file) != NULL) {
        *i += 1;
    }
    fseek(file, 0, SEEK_SET);
}

int creatMemory(score_data** data, int* size) {
    if(*data == NULL) {
        *data = (score_data*)malloc(sizeof(score_data)*(*size));
        if(*data == 0) { // メモリが生成できなければ、エラーを返す
            return -1;
        }
        return 0;
    }
    return -1; // 与えられたメモリの値が不定ならば、エラーを返す
}

void setData(FILE* file, score_data* data) {
    int i = 0;
    char line[SIZE];
    char *p;

    while(fgets(line, SIZE, file) != NULL) {
        p = strtok(line, ",\n");
        strcpy((data+i)->name, p); // 構造体の指定の仕方に注意
        p = strtok(NULL, ",\n");
        (data+i)->score = atoi(p);
        i++;
    }
}

void freeMemory(score_data** data) {
    if(*data != 0) {
        free(*data);
    }
}

void showData(score_data* data, int* n) {
    int i;

    printf("プレイヤー得点\n");
    printf("-----------\n");
    for(i = 0; i < *n; i++) {
        printf("%s %d点\n", (data+i)->name, (data+i)->score);
    }
    printf("-----------\n");
}

void searchMax(score_data* data, int* n) {
    int i, max = 0;
    int num;
    for(i = 0; i < *n; i++) {
        if(max < (data+i)->score) {
            max = (data+i)->score;
            num = i;
        }
    }
    printf("最高得点：%s(%d)\n", (data+num)->name, (data+num)->score);
}
