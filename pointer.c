#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int numA = rand() % 20 + 5, numB = rand() % 50 + 5;
    int numX = 0, numY;
    float result = 0;
    int num1[numA];
    int min_num[numA], max_num;

    printf("Enter a number: ");
    printf("%d\n", numA);

    for(int i = 0; i < numA; i++){
        num1[i] = rand() % 20 + 1;
        printf("%d\n", num1[i]);
        min_num[i] = 1;
    }

    for(int i = 0; i < numA; i++){
        if(num1[i] > numX){
            numX = num1[i];;
        }
        for(int j = 0; j <= i; j++){
            if(num1[j] == num1[j + i]){
                min_num[i]++;
            }
            if(min_num[j] == 1 && numY > numX){
                numY = num1[i];
            }
        }
    }

    printf("\n%d\n", numX);
    printf("%d\n", numY);

}