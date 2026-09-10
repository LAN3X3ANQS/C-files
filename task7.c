#include <stdio.h>
#include <math.h>
#define squareRoot(n) (sqrt(n))
int main() {

    int number = 25;

    double squareRoot = squareRoot(number);
    printf("%.2lf", squareRoot);
    return 0;
}