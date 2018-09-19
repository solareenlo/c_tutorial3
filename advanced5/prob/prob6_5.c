#include <stdio.h>

#define STUDENT_NUM (5)

typedef struct {
    int id;
    int kokugo;
    int sansu;
    int rika;
    int shakai;
    int eigo;
} student_data;

void setSeiseki(student_data*);
void showData(student_data*);

int main(void) {
    student_data data[STUDENT_NUM];

    setSeiseki(data);
    showData(data);

    return 0;
}

void setSeiseki(student_data* data) {
    int i;
    int id[STUDENT_NUM] = {1001, 1002, 1003, 1004, 1005};
    int kokugo[STUDENT_NUM] = {82, 92, 43, 72, 99};
    int sansu[STUDENT_NUM] = {43, 83, 32, 73, 72};
    int rika[STUDENT_NUM] = {53, 88, 53, 71, 82};
    int shakai[STUDENT_NUM] = {84, 79, 45, 68, 91};
    int eigo[STUDENT_NUM] = {45, 99, 66, 59, 94};

    for(i = 0; i < STUDENT_NUM; i++) {
        data->id = id[i];
        data->kokugo = kokugo[i];
        data->sansu = sansu[i];
        data->rika = rika[i];
        data->shakai = shakai[i];
        data->eigo = eigo[i];
        data++;
    }
}

int sum(student_data* data) {
    return data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
}

void showData(student_data* data) {
    int sum(student_data*);
    int i;

    printf("番号  国語  算数  理科  社会  英語  合計\n");
    for(i = 0; i < STUDENT_NUM; i++) {
        printf("%d   %d   %d   %d   %d   %d   %d\n", data->id, data->kokugo, data->sansu, data->rika, data->shakai, data->eigo, sum(data));
        data++;
    }
}
