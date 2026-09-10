#include <stdio.h>
#include <string.h>
int main() {
    char language[] = "C Programming";
    printf("\nLength: %zu", strlen(language));

    char food[] = "Pizza";
    char bestFood[strlen(food)];
    strcpy(bestFood, food);
    printf("%s", bestFood);

    char text1[] = "Hey, ";
    char text2[] = "How are you";
    strcat(text1, text2);
    printf("%s", text1);

    char text3[] = "abcd";
    char text4[] = "efgh";
    int result = strcmp(text3, text4);
    printf("%d", result);


    return 0;
}