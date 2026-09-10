#include <stdio.h>
int main() {

    FILE* fptr;

    fptr = fopen("newFile.txt", "w");

    fputs("I Love C Programming\n", fptr);
    fputs("C programming series by Programiz is the best", fptr);
    fclose(fptr);

    return 0;
}