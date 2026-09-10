#include <stdio.h>
#include <stdlib.h>
int main() {

    int n = 4;
    int* ages;
    ages = (int*) malloc(n * sizeof(int));
    printf("Enter input values:\n");
    for(int i = 0; i < n; ++i) {
       scanf("%d", ages + i);
    }

    printf("Input Values:\n");
    for(int i = 0; i < n; ++i) {
        printf("%d\n", *(ages + i));
    }

    n = 6;  
    ages =  realloc(ages, n * sizeof(int));
    ages[4] = 32;
    ages[5] = 59;
    printf("Newly Allocated Memory\n");
    for(int i = 0; i < n; ++i) {
        printf("%d\n", *(ages + i));
    }

    free(ages);
    return 0;
}