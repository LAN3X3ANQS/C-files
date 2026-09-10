#include <stdio.h>
#include <stdbool.h>
int main() {
    /*
    COMPARISON OPERATORS
    
    Greater than Operator (>) - This operator is used to compare two values. It returns true if the left operand is greater than the right operand, and false otherwise.
    Less than Operator (<) - This operator is used to compare two values. It returns true if the left operand is less than the right operand, and false otherwise.
    Greater than or equal to Operator (>=) - This operator is used to compare two values. It returns true if the left operand is greater than or equal to the right operand, and false otherwise.
    Less than or equal to Operator (<=) - This operator is used to compare two values. It returns true if the left operand is less than or equal to the right operand, and false otherwise.
    Equal to Operator (==) - This operator is used to compare two values. It returns true if the left operand is equal to the right operand, and false otherwise.
    Not equal to Operator (!=) - This operator is used to compare two values. It returns true if the left operand is not equal to the right operand, and false otherwise.

    LOGICAL OPERATORS

    AND Operator (&&) - This operator is used to combine two boolean expressions. It returns true if both expressions are true, and false otherwise.
    OR Operator (||) - This operator is used to combine two boolean expressions. It returns true if at least one of the expressions is true, and false otherwise.
    NOT Operator (!) - This operator is used to negate a boolean expression. It returns true if the expression is false, and false if the expression is true.
    */
    bool is_armed;
    printf("Enter the status of the system security; (1 for armed, 0 for unarmed): ");
    scanf("%d", &is_armed);

    bool motion_detected;
    printf("Enter the status of the system sensor; (1 for movement, 0 for no movement): ");
    scanf("%d", &motion_detected);

   bool result = (is_armed == 1) && (motion_detected == 1);

   if (result == 0) {
    printf("WARNING!!! SECURITY BREACHED!");
   } else if (result == 1) {
    printf("Status: SECURE");
   }

return 0;
}