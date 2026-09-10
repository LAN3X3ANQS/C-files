#include <stdio.h>
#include <math.h>

// Return float to preserve decimal precision
float computeRoot(float number) {
    return sqrt(number);
}

// Use the parameters passed into the function!
float computePower(float base, float exponent) {
    return pow(base, exponent);
}

int main() {
    float userInput;

    printf("Enter any value: ");
    scanf("%f", &userInput);

    // 1. Catch the return value of computeRoot
    float root = computeRoot(userInput);

    // 2. Pass local variables into computePower
    float finalResult = computePower(userInput, root);

    printf("Result = %.2f\n", finalResult);

    return 0;
}