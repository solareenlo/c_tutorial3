#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[128], s2[128];

    printf("文字列１：");
    scanf("%s", s1);
    printf("文字列２：");
    scanf("%s", s2);

    if(strcmp(s1, s2) == 0) {
        printf("同じものです\n");
    } else {
        printf("異なるものです\n");
    }

    return 0;
}
