#include <stdio.h>
int main() {
// For loop //
for (int i = 1; i <= 5; i++) {
   if (i == 3) {
    break;
   } 
   printf("%d\n", i);
}

// while loop // 
while (1) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        break;
    }
   printf("%d\n", number);
}


// Break statement //
 for (int i = 1; i <=5; i++) {
    if (i == 3) {
        continue;
    }
    printf("%d\n", i);
 }
// Example //
while (1) {
     int number1;
    printf("Enter a number1: ");
    scanf("%d", &number1);

    if (number1 < 0) {
        break;
    }

    if ((number1 % 2) != 0) {
        continue;
    }
}
return 0;
}



   
