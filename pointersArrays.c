#include <stdio.h>
int main() {
    int numbers[5] = {1, 3, 5, 7,9};
    for (int i = 0; i < 5; ++i) {
        printf("%d = %p\n", (numbers + i), numbers + i);  
    } 

    
    *numbers = 2;
    *(numbers + 4) = 11;

    printf("First Element: %d\n", *numbers);
    printf("First Element: %d", *(numbers + 4));
   
    return 0;
}