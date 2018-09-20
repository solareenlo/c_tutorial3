#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {
    FILE* file;
    char line[SIZE];
    int c;

    file = fopen("./sample.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    while(fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }

    fseek(file, 0, SEEK_SET);

    while((c=fgetc(file)) != EOF) {
        printf("%c", (char)c);
    }

    fclose(file);

    return 0;
}
