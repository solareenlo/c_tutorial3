#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* file;
    file = fopen("./HelloWorld.txt", "w");
    if(file == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    fprintf(file, "HelloWorld.");
    fclose(file);

    return 0;
}
