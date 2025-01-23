#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int num = rand() % 20 + 5, sum = 0;

    printf("Enter a number: ");
    printf("%d\n", num);

    for(int i = 0; i < num; i++){
        int random = rand() % 20 + 1;
        if(random % 2 == 0){
            sum += random;
        }
    }

    printf("The sum of the even numbers is: %d\n", sum);

    

}