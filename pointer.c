#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int num = rand() % 20 + 5, posctr = 0, negctr = 0, zerctr = 0;

    printf("Enter a number: ");
    printf("%d\n", num);

    for(int i = 0; i < num; i++){
        int random = rand() % 20 - 10;
        printf("%d\n", random);
        if(random > 0){
            posctr++;
        }
        else if(random < 0){
            negctr++;
        }
        else{
            zerctr++;
        }
    }

    printf("Positive numbers: %d\n", posctr);
    printf("Negative numbers: %d\n", negctr);
    printf("Zero numbers: %d\n", zerctr);

}