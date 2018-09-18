#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

int main(void) {
    struct student data;

    data.id = 1;
    strcpy(data.name, "山田太郎");
    data.age = 20;

    printf("学生番号：%d\n名前：%s\n年齢：%d\n", data.id, data.name, data.age);

    return 0;
}
