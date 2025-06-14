#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    FILE *fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        exit(1);
    }
    fprintf(fp, "Logging from infinite loop (C)...\n");
    fclose(fp);
    writeToFile(); // recursive call â infinite
}

int main() {
    writeToFile();
    return 0;
}