#include <stdio.h>

int isGreater(int *, int *);

int main(){

    int num1, num2, res;
    int *pNum1 = NULL, *pNum2 = NULL;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    pNum1 = &num1;
    pNum2 = &num2;

    res = (*pNum1 > *pNum2) ? *pNum1 : *pNum2;

    printf("The greater number is: %d", res);
    
}