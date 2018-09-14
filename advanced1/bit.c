#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned char i = 0xa;
    unsigned char j = 0xaa;

    printf("%x << 1 = %x\n", i, i << 2);        // １ビット左シフト
    printf("%x >> 1 = %x\n", i, i >> 2);        // １ビット右シフト
    printf("%x | %x = %x\n", i, j, i | j);      // OR演算
    printf("%x & %x = %x\n", i, j, i & j);      // AND演算
    printf("~%x = %x\n", i, (unsigned char)~i); // NOT演算

    return 0;
}
