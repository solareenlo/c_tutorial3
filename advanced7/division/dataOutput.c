#include "dataOutput.h"
#include <stdio.h>

extern int Error;

void showStudentData(student* data) { // 生徒データの表示
    if(data != NULL) {
        printf("生徒番号：%d, 名前：%s\n", data->id, data->name);
    } else {
        printf("データが登録されていません\n");
    }
}

void showError() { // エラーの表示
    switch(Error) {
        case MESSAGE_OK:
        printf("0K!\n");
        break;
        case MESSAGE_ERROR:
        printf("ERROR!\n");
        break;
    }
}
