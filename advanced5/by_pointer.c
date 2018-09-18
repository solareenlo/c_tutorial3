#include <stdio.h>

typedef struct {
    int a;
    double d;
} num_data;

void dealData1(num_data data);
void dealData2(num_data* data);

int main(void) {
    num_data n1 = {1, 1.2f}, n2 = {1, 1.2f};

    printf("元の値\n");
    printf("n1.a = %d, n1.d = %f\n", n1.a, n1.d);
    printf("n2.a = %d, n2.d = %f\n", n2.a, n2.d);
    printf("n1のアドレス：0x%x, n2のアドレス：0x%x\n", &n1, &n2);
    printf("\n");

    dealData1(n1);
    dealData2(&n2);

    printf("値渡しの構造体の中で値を変化させた\n");
    printf("n1.a = %d, n1.d = %f\n", n1.a, n1.d);
    printf("ポインタ渡しの構造体の中で値を変化させた\n");
    printf("n2.a = %d, n2.d = %f\n", n2.a, n2.d);

    return 0;
}

void dealData1(num_data data) {
    printf("値渡しで表示\n");
    printf("a = %d, d = %f\n", data.a, data.d);
    printf("値渡しで渡ってきたデータのアドレスは0x%x\n", &data);
    printf("\n");
    data.a = 2;
    data.d = 2.4;
}

void dealData2(num_data* data) {
    printf("ポインタ渡しで表示\n");
    printf("a = %d, d = %f\n", data->a, data->d);
    printf("ポインタ渡しで渡ってきたデータのアドレスは0x%x\n", data);
    printf("\n");
    data->a = 2;
    data->d = 2.4;
}
