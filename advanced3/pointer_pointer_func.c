// ポインタのポインタを使って、main関数の外で動的メモリ確保と解放
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int createMemory (char**, int);
void freeMemory (char**);

int main(void) {
    char* s = NULL;

    createMemory(&s, 255);

    strcpy(s, "HelloWorld\n");
    printf("%s", s);

    freeMemory(&s);

    return 0;
}

int createMemory(char** mem, int size) {
    if(*mem == NULL) {
        *mem = (char*)malloc(sizeof(char)*size);
        if(*mem == 0) {
            return -1; // メモリが生成できなければエラー
        }
        return 0;
    }
    return -1; // 与えられたメモリの値が不定ならば、エラー
}

void freeMemory(char** mem) {
    if(mem != 0) {
        free(*mem);
    }
}
