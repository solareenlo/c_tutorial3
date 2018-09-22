#include <stdio.h>

void foo();

int main(void) {
    int i;

    for(i = 0; i < 4; i++) {
        foo();
    }

    return 0;
}

void foo() {
    static int num = 0; // 最初の一度だけ実行される, この関数内だけでしか、扱えない
    printf("num = %d\n", num);
    num++;
}
