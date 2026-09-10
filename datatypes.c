#include <stdio.h>
#include <stdbool.h> // For using BOOl // 
int main() {

// Working with "int" type data in C //
    int number = 20;
    printf("Age: %d", number);

// Working with "double" and "float" type data in C //
   //Double//
    double length = 13.5;
    printf("\nLength: %.1lfm", length);

   //Float//
    float length1 = 15.555f;
    printf("\n%.3f", length1);
    
// Working with "char" type data in C //
    char name[] = "Olanrewaju";
    printf("\n%s", name);

// Bool //
    bool value1 = true;
    bool value2 = false;

// Comparison Operators //
/*
    Greater than
    Less than
    Equal to 
    Greater than or equal to 
    Less than or equal to
    Not equal to 
*/

    // Greater than //
     bool value3 = (12 > 9);
     bool value4 = (5 > 9);

    // Less than //
     bool value5 = (12 < 9);
     bool value6 = (5 < 9);

    // Equal to //
     bool value7 = (12 == 9);
     bool value8 = (5 == 9);
     bool value9 = (9 == 9);

    // Greater than or equal to //
     bool value10 = (12 >= 9);
     bool value11 = (5 >= 9);

    // Less than or equal to //
     bool value12 = (12 <= 9);
     bool value13 = (5 <= 9);

    // Not equal to //
     bool value14 = (12 != 9);
     bool value15 = (5 != 9);
     bool value16 = (9 != 9);

// Using Comparison operators to compare variables //
    int num1 = 9;
    int num2 = 6;

    bool value17 = num1 > num2;
    bool value18 = num1 > 6;

// Logical Operators //
/*
 AND = "&&"
 OR = "||"
 NOT = "!"
*/
    int age = 16;
    double height = 6.3;

    bool value19 = (age >= 18) && (height > 6.0);
    bool value20 = (age >= 18) ||(height > 6.0);
    bool value21 = !(age >= 18);

// If Else Statements // 



    // We could also have this if you want make it print all characters till the next line. //
        printf("%s", name);
        printf("\n%d %d", value1, value2);
        printf("\n%d", value3);
        printf("\n%d", value4);
        printf("\n%d", value5);
        printf("\n%d", value6);
        printf("\n%d", value7);
        printf("\n%d", value8);
        printf("\n%d", value9);
        printf("\n%d", value10);
        printf("\n%d", value11);
        printf("\n%d", value12);
        printf("\n%d", value13);
        printf("\n%d", value14);
        printf("\n%d", value15);
        printf("\n%d", value16);
        printf("\n%d", value17);
        printf("\n%d", value18);
        printf("\n%d", value19);
        printf("\n%d", value20);
        printf("\n%d", value21);


// C terminal function goes like this "gcc practice.c -o program_name && ./program_nameoes like '' //
    return 0;
}