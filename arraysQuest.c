#include <stdio.h>
int main() {
    int score[5];
    int averageSum;

    printf("Input the Value for the subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }
   
    averageSum = (score[0] + score[1] + score[2] + score[3] + score[4])/5;
    printf("Average sum is %d", averageSum);

    return 0;
}