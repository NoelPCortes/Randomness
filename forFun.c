#include <stdio.h>
#include <math.h>

int main(){
    
    int numArgA, resNum = 0, i = 0;
    
    printf("Enter a binary number: ");
    scanf("%d", &numArgA);
    
    do{
        int remNum = numArgA % 10;
        resNum += remNum * pow(2, i++);
        numArgA /= 10;
    }while(numArgA > 0);
    
    printf("Decimal equivalent: %d\n", resNum);
    
}