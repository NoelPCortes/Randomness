#include <stdio.h>

int main(){
    
    int numArgA, primeCheck = 0;
    
    scanf("%d", &numArgA);
    
    if(numArgA > 0) {
        int i, j;
        for(i = 2; i < numArgA; i++){
            for(j = 2; j <= 10;j++){
                if(i * j == numArgA){
                    primeCheck = 1;
                    break;
                }
            }
        }
    } else {
        printf("Invalid input!");
        return 0;
    }
    
    if(primeCheck == 0) {
        printf("Prime!");
    } else {
        printf("Not Prime!");
    }
    
}