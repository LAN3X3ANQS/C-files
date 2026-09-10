#include <stdio.h>
int main() {

   int age;
   printf("Enter your age: ");
   scanf("%d", &age);

// If statements // 
    if(age >= 18){
        printf("You are eligible to vote");
    }

   else {
        printf("You are not eligible to vote");
    }

// Else if statements //
    int score;
    printf("Enter your Score: ");
    scanf("%d", score);

    if (score >= 90){
        printf("Grade: A");
    }

    else if(score >= 80){
        printf("Grade: B");
    }

    else if(score >= 70){
        printf("Grade: C");
    }

     else if(score >= 60){
        printf("Grade: D");
    }
  
     else if(score < 60){
        printf("Grade: F");
    }

    return 0;
}