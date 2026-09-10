#include <stdio.h>
int main() {
/*
for (initializationExpression; testExpression; updateExpression ) {

}
*/
   
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}

for (int i = 0; i < 10; i++) {
    printf("Emergency Condition\n");
}

int sum = 0;
for (int i = 1; i <= 100; i++) {
 sum = sum + i;
}
printf("%d", sum);
    return 0;
}