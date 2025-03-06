#include <stdio.h>

int factorial(int n){
    if(n == 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    printf("%d\n", factorial(num));
    
}