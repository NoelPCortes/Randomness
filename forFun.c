#include <stdio.h>
#include <string.h>
struct student {
    char ID[15];
    char first_Name[15];
    char last_Name[15];
    char course[10];
    char birthdate[10];
    int year;
    int age;
};

int main() {

    struct student student1 = {"24-0589-569", "Noel", "Cortes", "BSIT", "12-16-2005", 1, 19};

    /*printf("Enter student ID: ");
    fgets(student1.ID, sizeof(student1.ID), stdin);
    student1.ID[strlen(student1.ID)-1] = '\0';

    printf("Enter student first name: ");
    fgets(student1.first_Name, sizeof(student1.first_Name), stdin);
    student1.first_Name[strlen(student1.first_Name)-1] = '\0';

    printf("Enter student last name: ");
    fgets(student1.last_Name, sizeof(student1.last_Name), stdin);
    student1.last_Name[strlen(student1.last_Name) -1] = '\0';

    printf("Enter student course: ");
    fgets(student1.course, sizeof(student1.course), stdin);
    student1.course[strlen(student1.course) -1] = '\0';

    printf("Enter student birthdate: ");
    fgets(student1.birthdate, sizeof(student1.birthdate), stdin);
    student1.birthdate[strlen(student1.birthdate) -1] = '\0';

    printf("Enter student year: ");
    scanf("%d", &student1.year);

    printf("Enter student age: ");
    scanf("%d", &student1.age);*/

    printf("Student ID: %s\n", student1.ID);
    printf("Student first name: %s\n", student1.first_Name);
    printf("Student last name: %s\n", student1.last_Name);
    printf("Student course: %s\n", student1.course);
    printf("Student birthdate: %s\n", student1.birthdate);
    printf("Student year: %d\n", student1.year);
    printf("Student age: %d\n\n", student1.age);

    struct student student2 = {"23-3030-781", "Isaac", "Cortes", "BSIT", "12-22-2004", 2, 20};

    printf("Student ID: %s\n", student2.ID);
    printf("Student first name: %s\n", student2.first_Name);
    printf("Student last name: %s\n", student2.last_Name);
    printf("Student course: %s\n", student2.course);
    printf("Student birthdate: %s\n", student2.birthdate);
    printf("Student year: %d\n", student2.year);
    printf("Student age: %d\n\n", student2.age);
    
}