#include <stdio.h>

int main() {
    
    int num1, num2;
    int *pNum1 = NULL, *pNum2 = NULL;
    int pSum;

    printf("Input the first number : ");
    scanf("%d", &num1);

    printf("Input the second number : ");
    scanf("%d", &num2);

    pNum1 = &num1;
    pNum2 = &num2;
    pSum = *pNum1 + *pNum2;

    printf("The sum of the entered numbers is : %d", pSum);

    return 0;
}