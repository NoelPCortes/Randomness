#include <stdio.h>
#include <string.h>
struct student {
    char ID[10];
    char first_Name[10];
    char last_Name[10];
    char course[10];
    char birthdate[8];
    int year;
    int age;
};

int main() {

    struct student student1;

    printf("Enter student ID: ");
    fgets("student1.ID", 10, stdin);


}