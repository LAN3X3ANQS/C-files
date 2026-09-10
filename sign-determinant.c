#include <stdio.h>

int main() {

double number;

printf("\nEnter the Value: ");

scanf("%lf", &number);


if (number < 0) {

printf("\nThe number is negative");

} else if (number > 0) {

printf("\nThe number is positive");

} else if (number == 0) {

printf("\nThe number is zero");

}


return 0;

}