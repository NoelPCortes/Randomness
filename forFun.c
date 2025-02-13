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
    fgets(student1.ID, sizeof(student1.ID), stdin);
    student1.ID[strcspn(student1.ID, "\n")] = 0;

    printf("Enter student first name: ");
    fgets(student1.first_Name, sizeof(student1.first_Name), stdin);
    student1.first_Name[strcspn(student1.first_Name, "\n")]  = 0;

    printf("Enter student last name: ");
    fgets(student1.last_Name, sizeof(student1.last_Name), stdin);
    student1.last_Name[strcspn(student1.last_Name, "\n")] = 0;

    print("Enter student course: ");
    fgets(student1.course, sizeof(student1.course), stdin);
    student1.course[strcspn(student1.course, "\n")] = 0;

    printf("Enter student birthdate: ");
    fgets(student1.birthdate, sizeof(student1.birthdate), stdin);
    student1.birthdate[strcspn(student1.birthdate, "\n")] = 0;

    printf("Enter student year: ");
    scanf("%d", student1.year);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Student ID: %s\n", student1.ID);
    printf("Student first name: %s\n", student1.first_Name);
    printf("Student last name: %s\n", student1.last_Name);
    printf("Student course: %s\n", student1.course);
    printf("Student birthdate: %s\n", student1.birthdate);
    printf("Student year: %d\n", student1.year);
    printf("Student age: %d\n", student1.age);

}