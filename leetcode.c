#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int students[20];

    int num = rand() % 15 + 5;

    for(int i = 0; i < num; i++){
        students[i] = i;
        printf("Student[%d]\n", students[i] + 1);
    }

    printf("%lu\n", sizeof(students));
    printf("%lu\n", sizeof(students)/sizeof(students[0]));

    int *pStudents = NULL;
    pStudents = (int *)malloc(sizeof(int));

    for(int i = 0; i < num; i++){
        pStudents[i] = i;
        printf("Student[%d]\n", pStudents[i] + 1);
    }

    printf("%lu\n", sizeof(pStudents));
    printf("%lu\n", sizeof(pStudents)/sizeof(pStudents[0]));

    return 0;

}