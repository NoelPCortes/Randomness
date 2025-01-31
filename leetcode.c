#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int students[20];

    int num = rand() % 20 + 1;

    for(int i = 0; i < 20; i++){
        students[i] = i;
        printf("Student[%d]\n", students[i] + 1);
    }

    printf("%lu\n", sizeof(students));
    printf("%lu\n", sizeof(students)/sizeof(students[0]));

    return 0;

}