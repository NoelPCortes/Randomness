#include <stdio.h>

void findOddOrEven(int *);

int main(){

    int a = 4;
    int *pA = NULL;
    pA = &a;

    findOddOrEven(pA);

}

void findOddOrEven(int *num){

    if(*num % 2 == 0)
        printf("Is even");
    else
        printf("Is odd");

}