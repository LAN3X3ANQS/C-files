#include <stdio.h>
int main() {

     FILE* fptr;

    fptr = fopen("newFile1.txt", "w");

    fputs("C is a fun programming language\n", fptr);
    fputs("And, I love using C language", fptr);

    fclose(fptr);

    fptr = fopen("newFile1.txt", "r");
    char content[1000];
    if (fptr != NULL) {
        while (fgets(content, 1000, fptr)) {
            printf("%s", content);
        }
    }
    else {
        printf("File Open Unsuccessful");
    }

    fclose(fptr);
    return 0;
}