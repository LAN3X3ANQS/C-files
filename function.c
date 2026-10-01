#include <stdio.h>
#include <math.h>
int calculateSum(int number1 , int number2);
int main() {

/*
Functions syntax is
returnType functionName(parameters) {
    // function body
}
*/
    int result = calculateSum(5,1);
    printf("Result = %d", result);

    return 0;
}

int calculateSum(int number1 , int number2) {
    int sum = number1 + number2;
    return sum;
}