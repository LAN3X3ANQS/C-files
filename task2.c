#include <stdio.h>
int* multiplier(int* num1, int* num2, int* sum) {
     *sum = *num1 * *num2;  
     return sum; 
}

int main() {
   int number[2];
   printf("Enter 2 different values: \n");
   for(int i = 0; i < 2; ++i) {
        scanf("%d", &number[i]);  
    } 
    
    int product;
    product = *multiplier(&number[0], &number[1], &product);
    printf("The product of the two values is: %d", product);

    return 0;
}