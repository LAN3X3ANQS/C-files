#include <stdio.h>
int main() {

 /*
 syntax of the ternary operator:
 
    condition ? expression_if_true : expression_if_false;

    The ternary operator is a shorthand way of writing an if-else statement. It evaluates the condition and returns the value of the expression_if_true if the condition is true, or the value of the expression_if_false if the condition is false.
 */

 /*Example 1*/
 int age =15;

 (age >= 18) ? printf("You are an adult.\n") : printf("You are a minor.\n");

  /*Example 2*/
 int x = 10;
 int y = 20;
 int max = (x > y) ? x : y;
 printf("The maximum value is: %d\n", max);

  /*Example 3*/
  char operator = '+';
  int num1 = 5;
  int num2 = 3;
  int result = (operator == '+') ? num1 + num2 : (operator == '-') ? num1 - num2 : 0;
  printf("The result is: %d\n", result);

    return 0;
}
