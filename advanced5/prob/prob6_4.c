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
void calSum(student_data*, int*);
void calAve(int*, double*);
void showAve(double*);

int main(void) {
    student_data data[STUDENT_NUM];
    int sum[STUDENT_NUM] = {};
    double ave[STUDENT_NUM] = {};

    setSeiseki(data);
    calSum(data, sum);
    calAve(sum, ave);
    showAve(ave);

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

void calSum(student_data* data, int* sum) {
    int i;

    for(i = 0; i < STUDENT_NUM; i++) {
        sum[0] += data->kokugo;
        sum[1] += data->sansu;
        sum[2] += data->rika;
        sum[3] += data->shakai;
        sum[4] += data->eigo;
        data++;
    }
}

void calAve(int* sum, double* ave) {
    int i;

    for(i = 0; i < 5; i++) {
        ave[i] = sum[i] / 5.0;
    }
}

void showAve(double* ave) {
    printf("国語 平均 = %.2f\n", ave[0]);
    printf("算数 平均 = %.2f\n", ave[1]);
    printf("理科 平均 = %.2f\n", ave[2]);
    printf("社会 平均 = %.2f\n", ave[3]);
    printf("英語 平均 = %.2f\n", ave[4]);
}
