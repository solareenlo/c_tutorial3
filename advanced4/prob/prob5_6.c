#include <stdio.h>

int main(void) {
    char s1[128], s2[128];
    int i = 0;

    printf("文字列１：");
    scanf("%s", s1);
    printf("文字列２：");
    scanf("%s", s2);

    while(1) {
        if(s1[i] == s2[i]) {
            //printf("%c", s1[i]);
            i++;
            if(s1[i] == '\0' && s2[i] == '\0') {
                printf("同じものです\n");
                break;
            }
        } else {
            printf("異なるものです\n");
            break;
        }
    }

    return 0;
}
