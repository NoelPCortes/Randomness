#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numA = rand() % 20 + 5, numB = rand() % 50 + 5;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 3; j++){
            printf("%.0lf ", pow(i, j));
        }
        printf("\n");
    }

}