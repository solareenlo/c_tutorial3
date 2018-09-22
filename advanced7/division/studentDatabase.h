#ifndef _STUDENT_DATABASE_H_
#define _STUDENT_DATABASE_H_

#define MAX_STUDENT 10 // 生徒の最大人数
#define LENGTH 50 // 生徒の名前の最大数

enum ERROR { // エラーメッセージ
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct { // 生徒のデータ
    int id;
    char name[LENGTH];
} student;

void initDatabase(); // データベースの初期化
int add(int, char*); // データベースへの登録
student* get(int); // 生徒データの取得

#endif // _STUDENT_DATABASE_H_
