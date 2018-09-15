#include <stdio.h>

int main(void) {
    int a = 100;
    double b = 3.14;
    float c = 3.14f;
    char d = 'a';

    printf("aの値は%d、大きさは%lubyte、アドレスは0x%x\n", a, sizeof(int), &a);
    printf("bの値は%f、大きさは%lubyte、アドレスは0x%x\n", b, sizeof(double), &b);
    printf("cの値は%f、大きさは%lubyte、アドレスは0x%x\n", c, sizeof(float), &c);
    printf("dの値は%c、大きさは%lubyte、アドレスは0x%x\n", d, sizeof(char), &d);

    return 0;
}
