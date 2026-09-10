#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    printf("Enter your first word: ");
    fgets(str, sizeof(str), stdin);
    

    char str2[20];
    printf("Enter your second word: ");
    fgets(str2, sizeof(str2), stdin);
    

    if (strlen(str) > strlen(str2)) {
        printf("%s", str);
    } else if (strlen(str) < strlen(str2)) {
        printf("%s", str2);
    } else {
        printf("Both strings have the same length.");
    }

    return 0;
}