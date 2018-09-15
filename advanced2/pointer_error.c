// ポインタをNULLで初期化して、その後ポインタにアドレスを指定しないまま値を代入するとエラーになる
#include <stdio.h>

int main(void) {
    int *p = NULL;

    *p = 1;

    return 0;
}
