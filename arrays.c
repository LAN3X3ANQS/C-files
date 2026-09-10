#include <stdio.h>
int main() {
int age[5];
printf("Enter 5 different values: \n");
for(int i = 0; i < 5; ++i) {
    scanf("%d", &age[i]);  
}

for (int i = 0; i < 5; ++i) {
    printf("%d  ", age[i]);
}

    return 0;
}