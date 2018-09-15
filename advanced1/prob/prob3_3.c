// 0から255までの整数を二進数に変換
#include <stdio.h>

int main(void) {
    unsigned char n;

    printf("Input Number(0-255):");
    scanf("%hd", &n);
    printf("%d\n", n);

    while(n != 0) {
        if((n & 0x80) == 0) {
            printf("0");
            n = n << 1;
        } else {
            printf("1");
            n = n << 1;
        }
        if(n == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
