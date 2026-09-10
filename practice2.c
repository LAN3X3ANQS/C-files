#include <stdio.h>
int savedPin = 1234;
int main() {

for (int i = 0; i < 3; i++) {

    int pin;
    printf("Enter your pin: ");
    scanf("%d", &pin);

    if (pin == savedPin) {
        printf("Access Granted!\n");

        printf("___ MAIN MENU ___\n");

        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        int option;
        printf("Enter your preferred option from 1 through to 4 based on what you want to do: ");
        scanf("%d", &option);

        switch(option) {

            case 1:
            printf("__ Check Balance __\n");
            printf("Current Balance: $1000.00\n");
            break;

            case 2:
            printf("__ Deposit __\n");

            float depositAmount;
            printf("Enter deposit amount: \n");
            scanf("%f", &depositAmount);
            printf("Successfully deposited $%.2f!", depositAmount);
            break;

            case 3:
            printf("__ Withdraw __\n");

            float withdrawAmount;
            printf("Enter withdraw amount: \n");
            scanf("%f", &withdrawAmount);
            printf("Successfully withdrew $%.2f!", withdrawAmount);  
            break;

            case 4:
            printf("Thank you for your service. Goodbye!\n");
            break;
        }
        break;
    } else {
        printf("Access Denied!\n");
    }
    
    }

    return 0;
}