#include <stdio.h>
#include <ctype.h>

int computeSum(int, int);
int computeDifference(int, int);
int computeProduct(int, int);
float computeQuotient(int, int);

int main(){

    char operator;

    int numArgA, numArgB;

    operator = getchar();
    if(operator == '\n'){
        operator = getchar();
    }

    scanf("%d %d", &numArgA, &numArgB);

    switch(operator){
        case '+': printf("Sum = %d\n", computeSum(numArgA, numArgB)); break;
        case '-': printf("Difference = %d\n", computeDifference(numArgA, numArgB)); break;
        case '*': printf("Product = %d\n", computeProduct(numArgA, numArgB)); break;
        case '/': printf("Quotient = %.2f\n", computeQuotient(numArgA, numArgB)); break;
        default: printf("Invalid operator!");
    }

}

int computeSum(int numA, int numB){
    return numA + numB;
}

int computeDifference(int numA, int numB){
    return numA - numB;
}

int computeProduct(int numA, int numB){
    return numA * numB;
}

float computeQuotient(int numA, int numB){
    float res;
    res = (float)numA / numB;
    return res;
}