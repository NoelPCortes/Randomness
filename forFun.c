#include <stdio.h>

int main(){
    
    int numArgA, resNum, i = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &numArgA);
    
    do{
        if(i % 3 == 0 || i % 5 == 0){
            resNum += i;
        }
        i++;
    }while(i < numArgA);
    
    printf("The sum of all multiples of 3 or 5 below %d is %d.", numArgA,resNum);
    
}