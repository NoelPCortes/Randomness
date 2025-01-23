#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int num = rand() % 20 + 5, numGreat = 0;
    int position = 0;

    printf("Enter a number: ");
    printf("%d\n", num);

    for(int i = 0; i < num; i++){
        int random = rand() % 20 + 1;
        printf("%d\n", random);
        if(random >= numGreat){
            numGreat = random;
            position = i;
        }
    }

    printf("The greatest number is: %d\n", numGreat);
    printf("The position of the greatest number is: %d\n", position + 1);

}