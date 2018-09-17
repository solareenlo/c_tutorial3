// 関数ポインタを引数としてとる関数の練習
#include <stdio.h>

void funcp(double (*)(double), double n); // 関数ポインタを引数としてとる関数
double dbl(double);
double hlf(double);

int main(void) {
    funcp(dbl, 4.2);
    funcp(hlf, 10.15);

    return 0;
}

void funcp(double (*fp)(double), double n) {
    printf("引数：%.2f, 結果：%.2f\n", n, fp(n));
}

double dbl(double n) {
    return n * 2.0;
}

double hlf(double n) {
    return n / 2.0;
}
