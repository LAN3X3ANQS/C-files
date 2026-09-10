#include <stdio.h>
typedef struct People{
    double salary;
    int age;
}people;

struct Person {
    double salary;
    int age;
}person1, person2;

int main() {
    //typedef//
    people people1;
    people1.age = 25;
    people1.salary = 4321.78;

    
    person1.age = 25;
    person1.salary = 4321.78;

    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2lf\n", person1.salary);

    person2.age = 31;
    person2.salary = 78943.2;

    printf("Age of person2: %d\n", person2.age);
    printf("Salary of person2: %.2lf\n", person2.salary);

    struct Person person3 = {.age = 25, .salary = 4321.78};
    struct Person person4 = {.age = 25, .salary = 4321.78};

    

    return 0;
}