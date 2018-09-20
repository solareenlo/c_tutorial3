#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* file;
    int i, size;
    char* rdata;

    file = fopen("./test.bin", "rb");
    if(file == NULL) {
        printf("バイナリデータを開くことができません\n");
        exit(1);
    }

    fseek(file, 0, SEEK_END); // ファイルの最後までポインタを移動
    size = ftell(file); // ポインタの位置の値をバイト数で返す
    rdata = (char*)malloc(sizeof(char)*size); // ファイルのサイズだけ、動的に配列を準備
    fseek(file, 0, SEEK_SET); // ファイルの先頭までポインタを戻す

    fread(rdata, sizeof(char), size, file);
    fclose(file);

    for(i = 0; i < size; i++) {
        printf("%x ", rdata[i]);
    }
    printf("\n");

    free(rdata);

    return 0;
}
