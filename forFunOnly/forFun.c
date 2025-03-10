#include <stdio.h>
#include <ctype.h>
#include "libraryFun.h"

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