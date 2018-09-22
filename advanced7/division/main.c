#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"

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
