#include <stdio.h>

int* findSquare(int* number) {
    int square = *number * *number;
    *number = square;
    
    return number;
}

int* addNumbers(int* num1, int* num2, int* sum) {
    *sum = *num1 + *num2;
    return sum;
}

int main() {

    int number = 21;
    int* result = findSquare(&number);
    printf("Result is: %d\n", *result);
     
    int number1 = 32;
    int number2 = 18;
    int sum;
    int* result2 = addNumbers(&number1, &number2, &sum);
    printf("Sum is %d", *result2);

    return 0;
}