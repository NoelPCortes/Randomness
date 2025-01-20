#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int random_number = rand() % 15 + 5;

    int num[100], min_num[100];

    printf("What is the numbers of integers you wish to input? ");
    printf("%d", random_number);

    printf("Input numbers: ");
    for(int i = 0; i < random_number; i++){
        num[i] = rand() % 20 + 1;
    }

    for(int i = 0; i < random_number; i++){
        if(num[i] == num[i+1])
        min_num[i];
    }

}