#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int num = rand() % 20 + 5, sum = 0;
    int a = 25;

    printf("Enter a number: ");
    printf("%d\n", num);

    for(int i = 0; i < 100; i++){
        //int random = rand() % 20 + 1;
        //printf("%d\n", random);
        if(i %  a == 3){
            printf("%d\n", i);
        }
    }

}