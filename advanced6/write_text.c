#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file;
    file = fopen("./sample.txt", "w");

    if(file == NULL) {
        printf("ファイルを開けません\n");
        exit(1);
    }

    fprintf(file, "Hello World.\n");
    fprintf(file, "ABC\n");

    fclose(file);

    return 0;
}
