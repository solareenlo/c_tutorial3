// 構造体と関数とポインタと基本ソートを使って、５人の生徒の成績を、５教科の合計点数が高い順に並べ替えて再表示
#include <stdio.h>

#define STUDENT_NUM (5)

typedef struct {
    int id;
    int kokugo;
    int sansu;
    int rika;
    int shakai;
    int eigo;
    int sum;
} student_data;

void setSeiseki(student_data*);
void showData(student_data*);
void sortData(student_data*);

int main(void) {
    student_data data[STUDENT_NUM];

    setSeiseki(data);
    printf("入れ替える前のデータ\n");
    showData(data);
    sortData(data);
    printf("入れ替えた後のデータ\n");
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
        data->sum = data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
        data++;
    }
}

void showData(student_data* data) {
    int sum(student_data*);
    int i;

    printf("番号  国語  算数  理科  社会  英語  合計\n");
    for(i = 0; i < STUDENT_NUM; i++) {
        printf("%d  %d    %d    %d    %d    %d    %d\n", data->id, data->kokugo, data->sansu, data->rika, data->shakai, data->eigo, data->sum);
        data++;
    }
}

void sortData(student_data* data) {
    int i, j;
    int temp;
    void swapStruct(student_data*, student_data*);

    for(i = 0; i < STUDENT_NUM-1; i++) {
        for(j = i+1; j < STUDENT_NUM; j++) {
            if((data+i)->sum < (data+j)->sum) {
                swapStruct((data+i), (data+j));
            }
        }
    }
}

void swapStruct(student_data* data1, student_data* data2) {
    int  temp;

    temp = data1->sum; data1->sum = data2->sum; data2->sum = temp;
    temp = data1->kokugo; data1->kokugo = data2->kokugo; data2->kokugo = temp;
    temp = data1->sansu; data1->sansu = data2->sansu; data2->sansu = temp;
    temp = data1->rika; data1->rika = data2->rika; data2->rika = temp;
    temp = data1->shakai; data1->shakai = data2->shakai; data2->shakai = temp;
    temp = data1->eigo; data1->eigo = data2->eigo; data2->eigo = temp;
    temp = data1->id; data1->id = data2->id; data2->id = temp;
}
