#include "studentDatabase.h"
#include <string.h>

#define MESSAGE_LENGTH 256

static int num = 0; // データベースに登録されている生徒の人数
static student student_database[MAX_STUDENT]; // 生徒のデーターベース
int Error = MESSAGE_OK;

void initDatabase() { // データベースの初期化
    int i;
    for(i = 0; i < MAX_STUDENT; i++) {
        student_database[i].id = -1;
        strcpy(student_database[i].name, "");
    }
    Error = MESSAGE_OK;
    num = 0;
}

int add(int id, char* name) { // データベースへの登録
    // すでに登録されているidであれば登録しない
    if(get(id) == NULL && num < MAX_STUDENT) {
        student_database[num].id = id;
        strcpy(student_database[num].name, name);
        num++;
        Error = MESSAGE_OK;
        return 1; // 登録できたら、1を返す
    }
    Error = MESSAGE_ERROR;
    return 0; // 登録できなければ、0を返す
}

student* get(int id) { // データベースの取得
    int i;
    for(i = 0; i < num; i++) {
        if(student_database[i].id == id) { // 該当するidのデータが見つかった、
            return &student_database[i]; // そのidが含まれる構造体のポインタを返す
        }
    }
    return NULL;
}
