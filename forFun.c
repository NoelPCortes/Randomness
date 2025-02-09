#include <stdio.h>

int main(){
    
    int num, res = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Reversed number: ");
    
    while(num > 0){
        res = (res * 10) + num % 10;
        num /= 10;
    }
    
    printf("%d", res);
    
}