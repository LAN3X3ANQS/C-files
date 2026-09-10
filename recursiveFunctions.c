#include <stdio.h>
int result;

int takeFactorial(int inputValue) {
    if (inputValue > 0) {
        return inputValue + takeFactorial(inputValue - 1);
    } else {
        return inputValue;
    }
}

int main() {

    int inputNumber;
    printf("Enter any value: ");
    scanf("%d", &inputNumber);

    result = takeFactorial(inputNumber);
    printf("Factorial %d is %d", inputNumber, result);
 

    return 0;
}

