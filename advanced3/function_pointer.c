#include <stdio.h>

void func1();
void func2();

int main(void) {
    void (*fp)() = func1; // 関数ポインタをfunc1で初期化

    fp();
    fp = func2;
    fp();

    return 0;
}

void func1() {
    printf("func1\n");
}

void func2() {
    printf("func2\n");
}
