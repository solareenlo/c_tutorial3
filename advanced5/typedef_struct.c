#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

int main(void) {
    int i;

    student_data data[] = {
        {1, "山田太郎", 18},
        {2, "佐藤花子", 19},
        {3, "田中聡", 20},
        {4, "渡邊徹", 21}
    };

    for(i = 0; i < 4; i++) {
        printf("学籍番号：%d, 名前：%s, 年齢：%d\n", data[i].id, data[i].name, data[i].age);
    }

    return 0;
}
