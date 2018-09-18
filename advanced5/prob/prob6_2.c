#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

typedef struct {
    char name[256];
    int id;
    int sex;
    int grade;
} student_data;

void setData(student_data*, char*, int, int, int);
void showData(student_data*);

int main(void) {
    student_data data[STUDENT_NUM];
    char name[][256] = {"青木太郎", "遠藤花子", "加藤悟", "佐々木美佐枝", "田中徹"};
    int id[] = {1001, 1002, 1003, 1004, 1005};
    int sex[] = {0, 1, 0, 1, 0};
    int grade[] = {1, 1, 1, 1, 2};
    int i;

    for(i = 0; i < STUDENT_NUM; i++) {
        setData(&data[i], name[i], id[i], sex[i], grade[i]);
    }

    for(i = 0; i < STUDENT_NUM; i++) {
        showData(&data[i]);
    }

    return 0;
}

void setData(student_data* data, char* name, int id, int sex, int grade) {
    strcpy(data->name, name);
    data->id = id;
    data->sex = sex;
    data->grade = grade;
}

void showData(student_data* data) {
    printf("名前：%s\n", data->name);
    printf("性別：");
    if(data->sex == 0) {
        printf("男\n");
    } else {
        printf("女\n");
    }
    printf("学生番号：%d\n", data->id);
    printf("学年：%d\n\n", data->grade);
}
