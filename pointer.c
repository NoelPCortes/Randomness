#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numA = rand() % 20 + 5, numB = rand() % 50 + 5;

    printf("Input the first integer: ");
    printf("%d\n", numA);

    printf("Input the seconde integer: ");
    printf("%d\n", numB);

    for(int i = numA; i <= numB; i++){
        if(i % 7 == 2 || i % 7 == 3){
            printf("%d\n", i);
        }
    }

}