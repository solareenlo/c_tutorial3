#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file;
    int c;

    file = fopen("./test.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    while((c=fgetc(file)) != EOF) {
        printf("%c", (char)c);
    }

    fclose(file);

    return 0;
}
