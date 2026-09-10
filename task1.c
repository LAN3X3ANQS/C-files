#include <stdio.h>
int main() {
    int arr[5];
    int largest = *arr;
    printf("Enter 5 different values: \n");
        for(int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]); 
        if (largest < *(arr + i) ) {
            largest = *(arr + i);
        }
    }
    printf("The largest value is: %d", largest);

    return 0;
}