#include <stdio.h>

int main(){
    
    int numArgA, numArgB, i = 1, numRes = 1;
    
    printf("Enter x: ");
    scanf("%d", &numArgA);
    
    printf("Enter n: ");
    scanf("%d", &numArgB);
    
    while(i <= numArgB){
        numRes *= numArgA;
        i++;
    }
    
    printf("%d^%d = %d", numArgA, numArgB, numRes);
    
}