#include <stdio.h>
#include <string.h>

typedef struct {
    char month[16];
    int house;
    int food;
    int clothes;
    int education;
    int medical;
    int other;
    int sum;
} kakei;

void setData(kakei*);
void showData(kakei*);
void printsum(kakei*);

int main(void) {
    int i, i_max = 0;
    char max[16];
    kakei data[6];

    setData(data);
    showData(data);
    printf("\n");
    printsum(data);

    // 医療費の最も多い月を探索
    for(i = 0; i < 6; i++) {
        if(i_max < data[i].medical) {
            i_max = data[i].medical;
            strcpy(max, data[i].month);
        }
    }
    printf("医療費の最も多い月：%s\n", max);

    // 食費の最も多い月と金額を探索
    i_max = 0;
    max[0] =  '\0';
    for(i = 0; i < 6; i++) {
        if(i_max < data[i].food) {
            i_max = data[i].food;
            strcpy(max, data[i].month);
        }
    }
    printf("食費の最も多い月と金額：%s、%d\n", max, i_max);

    return 0;
}

void setData(kakei* data) {
    char month[][16] = {"1月", "2月", "3月", "4月", "5月", "6月"};
    int house[] = {86000, 86000, 86000, 86000, 86000, 86000};
    int food[] = {47000, 43000, 38600, 39500, 38600, 37500};
    int clothes[] = {3000, 30000, 5000, 0, 28000, 3000};
    int education[] = {20000, 15000, 65000, 12000, 7000, 5000};
    int medical[] = {9500, 0, 500, 0, 5200, 0};
    int other[] = {66000, 43000, 76000, 75000, 63500, 67000};
    int sum[6];
    int i;

    for(i = 0; i < 6; i++) {
        strcpy((data+i)->month, month[i]);
        (data+i)->house = house[i];
        (data+i)->food = food[i];
        (data+i)->clothes = clothes[i];
        (data+i)->education = education[i];
        (data+i)->medical = medical[i];
        (data+i)->other = other[i];
        (data+i)->sum = house[i]+food[i]+clothes[i]+education[i]+medical[i]+other[i];
    }
}

void showData(kakei* data) {
    int i;

    printf("月  住居費 食費  被服費 教養費 医療費 その他\n");
    for(i = 0; i < 6; i++) {
        printf("%s %5d  %5d  %5d  %5d  %5d  %5d\n", data->month, data->house, data->food, data->clothes, data->education, data->medical, data->other);
        data++;
    }
}

void printsum(kakei* data) {
    int i;

    printf("各月の出費の合計\n");
    printf("----------------\n");
    for(i = 0; i < 6; i++) {
        printf("%s %6d\n", data->month, data->sum);
        data++;
    }
}
