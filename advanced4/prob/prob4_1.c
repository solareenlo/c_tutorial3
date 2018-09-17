#include <stdio.h>

int main(void) {
    int nums[] = {1, 2, 3, 4, 5};
    int *p = NULL;
    int i;

    p = &nums[4];

    for(i = 0; i < 5; i++) {
        printf("%d ", *p);
        p--;
    }
    printf("\n");

    return 0;
}
