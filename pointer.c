#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numA = rand() % 9 + 1, numB = rand() % 50 + 5;
    int numX = 5, numY;
    float result = 0;

    for(int i = 1; i <= 5; i++){
        printf("Num[%d]: %d\n", i, numX);
        numX *= 3;
    }

}