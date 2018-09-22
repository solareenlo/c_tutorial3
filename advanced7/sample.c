#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 10 // 生徒の最大人数
#define LENGTH 50 // 生徒の名前の最大数
#define MESSAGE_LENGTH // エラーメッセージの文字列の最大数

enum ERROR { // エラーメッセージ
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct { // 生徒のデータ
    int id;
    char name[LENGTH];
} student;

int num = 0; // データベースに登録されている生徒の人数
student student_database[MAX_STUDENT]; // 生徒のデーターベース
int Error;
void initDatabase(); // データベースの初期化
int add(int, char*); // データベースへの登録
student* get(int); // 生徒データの取得
void showStudentData(student*); // 生徒データの表示
void showError(); // エラーの表示

int main(void) {
    int i;
    char names[][LENGTH] = {"山田太郎", "佐藤二朗", "齋藤大輔", "山口智子"};
    int ids[] = {1, 2, 2, 3};

    initDatabase();

    for(i = 0; i < 4; i++) {
        add(ids[i], names[i]);
        printf("登録：%d %s\n", ids[i], names[i]);
        showError();
    }
    for(i = 0; i < 3; i++) {
        showStudentData(get(i+1));
    }

    return 0;
}

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

student* get(int id) {
    int i;
    for(i = 0; i < num; i++) {
        if(student_database[i].id == id) { // 該当するidのデータが見つかった、
            return &student_database[i]; // そのidが含まれる構造体のポインタを返す
        }
    }
    return NULL;
}

void showStudentData(student* data) {
    if(data != NULL) {
        printf("生徒番号：%d, 名前：%s\n", data->id, data->name);
    } else {
        printf("データが登録されていません\n");
    }
}

void showError() {
    switch(Error) {
        case MESSAGE_OK:
        printf("0K!\n");
        break;
        case MESSAGE_ERROR:
        printf("ERROR!\n");
        break;
    }
}
