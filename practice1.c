#include <stdio.h>
char grade1;
char grade2;
char grade3;
char grade4;
char grade5;

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

// Funtion to evaluate the grade of the student //
void evaluateGrade(float gradePoint); { 
// For subject 1 //
    if (subject1gradePoint >= 4.0) {
       grade1 = 'A';
    } else if (subject1gradePoint >= 3.0) {
        grade1 = 'B';
    } else if (subject1gradePoint >= 2.0) {
        grade1 = 'C';
    } else if (subject1gradePoint >= 1.0) {
        grade1 = 'D';
    } else {
        grade1 = 'F';       
    }

// For subject 2 //
    if (subject2gradePoint >= 4.0) {
       grade2 = 'A';
    } else if (subject2gradePoint >= 3.0) {
        grade2 = 'B';
    } else if (subject2gradePoint >= 2.0) {
        grade2 = 'C';
    } else if (subject2gradePoint >= 1.0) {
        grade2 = 'D';
    } else {
        grade2 = 'F';       
    }

// For subject 3 //
    if (subject3gradePoint >= 4.0) {
       grade3 = 'A';
    } else if (subject3gradePoint >= 3.0) {
        grade3 = 'B';
    } else if (subject3gradePoint >= 2.0) {
        grade3 = 'C';
    } else if (subject3gradePoint >= 1.0) {
        grade3 = 'D';
    } else {
        grade3 = 'F';       
    }

// For subject 4 //
    if (subject4gradePoint >= 4.0) {
       grade4 = 'A';
    } else if (subject4gradePoint >= 3.0) {
        grade4 = 'B';
    } else if (subject4gradePoint >= 2.0) {
        grade4 = 'C';
    } else if (subject4gradePoint >= 1.0) {
        grade4 = 'D';
    } else {
        grade4 = 'F';       
    }

// For subject 5 //
    if (subject5gradePoint >= 4.0) {
       grade5 = 'A';
    } else if (subject5gradePoint >= 3.0) {
        grade5 = 'B';
    } else if (subject5gradePoint >= 2.0) {
        grade5 = 'C';
    } else if (subject5gradePoint >= 1.0) {
        grade5 = 'D';
    } else {
        grade5 = 'F';       
    }

};
    
// Function to calculate the average score //
  float averagegradePoint = (subject1gradePoint + subject2gradePoint + subject3gradePoint + subject4gradePoint + subject5gradePoint)/(5);

// Function to print the Highest score //
    float highest = subject1gradePoint;
    if (subject2gradePoint > highest) highest = subject2gradePoint;
    if (subject3gradePoint > highest) highest = subject3gradePoint;
    if (subject4gradePoint > highest) highest = subject4gradePoint;
    if (subject5gradePoint > highest) highest = subject5gradePoint;

// Function to print the Lowest score //
     float lowest = subject1gradePoint;
    if (subject2gradePoint < lowest) lowest = subject2gradePoint;
    if (subject3gradePoint < lowest) lowest = subject3gradePoint;
    if (subject4gradePoint < lowest) lowest = subject4gradePoint;
    if (subject5gradePoint < lowest) lowest = subject5gradePoint; 

    printf("STUDENT GRADE REPORT");

    printf("\nName: %s", userName);
    printf("\nStudent ID: %s", userID);
    printf("\n%s : %.2f : %c", subject1, subject1gradePoint, grade1);
    printf("\n%s : %.2f : %c", subject2, subject2gradePoint, grade2);
    printf("\n%s : %.2f : %c", subject3, subject3gradePoint, grade3);
    printf("\n%s : %.2f : %c", subject4, subject4gradePoint, grade4);
    printf("\n%s : %.2f : %c", subject5, subject5gradePoint, grade5);
    printf("\nAverage Score: %.2f", averagegradePoint);
    printf("\nHighest Score: %.2f", highest);
    printf("\nLowest Score: %.2f", lowest);

    return 0;
}