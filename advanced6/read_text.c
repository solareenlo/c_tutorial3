#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {
    FILE *file;
    char line[SIZE];

    line[0] = '\0';

    file = fopen("./test.txt", "r");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    while(fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
