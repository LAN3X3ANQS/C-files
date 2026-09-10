#include <stdio.h>

typedef struct Complex {
    double real;
    double imagine;
} complex;

int main() {
    // 1. Declare three complex numbers
    complex c1 = {.real = 21.87, .imagine = 30};
    complex c2 = {.real = 13.34, .imagine = 112.23};
    complex c3 = {.real = 5.20,  .imagine = 10.15}; // Add your third number here

    complex diff;

    // 2. Subtract the real parts and imaginary parts (c1 - c2 - c3)
    diff.real = c1.real - c2.real - c3.real;
    diff.imagine = c1.imagine - c2.imagine - c3.imagine;

    // 3. Print the result
    printf("Result is %.2lf + %.2lfi\n", diff.real, diff.imagine);

    return 0;
}