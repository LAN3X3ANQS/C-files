#include <stdio.h>
void change (int* ptr) {
    *ptr = 31;
    return;
}

int main() {
    int age = 25;
    int* ptr = &age;

    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *ptr);

    change (ptr);
    
    printf("%d", *ptr);
    return 0;
}