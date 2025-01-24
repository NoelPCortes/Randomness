#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numA = rand() % 20 + 5, numB = rand() % 50 + 5;
    float result = 0;

    for(int i = 1; i <= 50; i++){
        result += (float)1/i;
    }

    printf("Result: %.2lf\n", result);

}