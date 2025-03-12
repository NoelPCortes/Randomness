#include <stdio.h>

void oddUpCount(int);

int main(){
    
    int numA;
    
    printf("Enter the value of N: ");
    scanf("%d", &numA);
    
    printf("Odd numbers from 1 to %d are: ", numA);
    
    oddUpCount(numA);
    
}

void oddUpCount(int n1){
    if(n1 % 2 != 0 && n1 > 0){
        oddUpCount(n1 - 1);
        printf("%d ", n1);
    } else if(n1 > 0){
        oddUpCount(n1 - 1);
    }
}