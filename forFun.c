#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int num, i = 0, temp = 0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    char strArg[25];
    strArg[0] = '0';
    
    while(num > 0){
        strArg[i] = (num % 2 == 0) ? '0' : '1';
        num/=2;
        i++;
    }
    
    int length = strlen(strArg);
    
    printf("Binary equivalent: ");
    
    while(length >= 0){
        printf("%c", strArg[length--]);
    }
    
}