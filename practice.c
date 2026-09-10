#include <stdio.h>
#include <math.h>
int main() {

// Function to take the user's Name and ID //  
    char userName[100];
      printf("\nEnter your name: ");
      scanf("%[^\n]s", userName);

    char userID[100];
      printf("Enter your Matric No: ");
      scanf("%s", userID);

// Function to take the subjects and their respective grade values //

  char subject1[100];
    printf("\nEnter the first Subject: ");
    scanf("%s", subject1);

  float subject1gradePoint;
    printf("Grade Point: ");
    scanf("%f", &subject1gradePoint);

  char subject2[100];
    printf("Enter the second Subject: ");
    scanf("%s", subject2);

  float subject2gradePoint;
    printf("Grade Point: ");
    scanf("%f", &subject2gradePoint);

  char subject3[100];
    printf("Enter the third Subject: ");
    scanf("%s", subject3);

  float subject3gradePoint;
    printf("Grade Point: ");
    scanf("%f", &subject3gradePoint);

  char subject4[100];
    printf("Enter the fourth Subject: ");
    scanf("%s", subject4);

 float subject4gradePoint;
    printf("Grade Point: ");
    scanf("%f", &subject4gradePoint);

  char subject5[100];
    printf("Enter the fifth Subject: ");
    scanf("%s", subject5);

 float subject5gradePoint;
    printf("Grade Point: ");
    scanf("%f", &subject5gradePoint);

// Function to calculate the average score //
  float averagegradePoint = (subject1gradePoint + subject2gradePoint + subject3gradePoint + subject4gradePoint + subject5gradePoint)/(5);

// Function to calculate the highest score and Lowest Score //
  float a = subject1gradePoint;
  float b = subject2gradePoint; 
  float c = subject3gradePoint;
  float d = subject4gradePoint;
  float e = subject5gradePoint;

  float z = (a + b + (fabs(a - b)))/(2);
  z = (z + c + (fabs(z - c)))/(2);
  z = (z + d + (fabs(z - d)))/(2);
  z = (z + e + (fabs(z - e)))/(2);

  float y = (a + b - (fabs(a - b)))/(2);
  y = (y + c - (fabs(y - c)))/(2);
  y = (y + d - (fabs(y - d)))/(2);
  y = (y + e - (fabs(y - e)))/(2);

  printf("STUDENT GRADE REPORT");

    printf("\nName: %s", userName);
    printf("\nStudent ID: %s", userID);
    printf("\n%s : %.2f", subject1, subject1gradePoint); 
    printf("\n%s : %.2f", subject2, subject2gradePoint);
    printf("\n%s : %.2f", subject3, subject3gradePoint);
    printf("\n%s : %.2f", subject4, subject4gradePoint);
    printf("\n%s : %.2f", subject5, subject5gradePoint);
    printf("\nAverage Score: %.2f", averagegradePoint);
    printf("\nHighest Score: %.2f", z);
    printf("\nLowest Score: %.2f", y);
   
    return 0;
}