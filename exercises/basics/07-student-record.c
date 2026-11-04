#include <stdio.h>

struct Student{
    char name[20];
    int number;
    float avg;
};


int main() {
    struct Student student1;
    strcpy(student1.name, "Ivan");
    student1.number = 13;
    student1.avg = 6;

    printf("Name: %s\n", student1.name);
    printf("Number in class: %d\n", student1.number);
    printf("Average success: %.2f\n", student1.avg);
}