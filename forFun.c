#include <stdio.h>
#include <ctype.h>

int computeSum(int num1, int num2);
int computeDifference(int num1, int num2);
int computeProduct(int num1, int num2);
float computeQuotient(int num1, int num2);

int main(){
    
    char op;
    int numA, numB;
    
    op = getchar();
    if(op == '\0'){
        op = getchar();
    }
    
    scanf("%d", &numA);
    scanf("%d", &numB);
    
    switch(op){
        case '+': printf("Sum = %d", computeSum(numA,numB)); break;
        case '-': printf("Difference = %d", computeDifference(numA,numB)); break;
        case '*': printf("Product = %d", computeProduct(numA,numB)); break;
        case '/': printf("Quotient = %.2f", computeQuotient(numA,numB)); break;
        default: printf("Invalid operator!");
    }
    
}

int computeSum(int num1, int num2){
    return num1 + num2;
}

int computeDifference(int num1, int num2){
    return num1 - num2;
}

int computeProduct(int num1, int num2){
    return num1 * num2;
}

float computeQuotient(int num1, int num2){
    return (float)num1 / num2;
}