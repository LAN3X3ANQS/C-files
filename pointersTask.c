#include <stdio.h>
int main() {
    double salary;
    printf("Enter your respective value: ");
    scanf("%lf", &salary);

    double* ptr = &salary;
    double result = *ptr * 2;

    printf("%.2lf\n", *ptr);
    printf("%.2lf\n", result);


    return 0;
}