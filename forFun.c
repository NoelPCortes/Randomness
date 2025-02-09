#include <stdio.h>
#include <string.h>

int main(){
    
    char stringArg[50];
    
    printf("Enter a string: ");
    fgets(stringArg, sizeof(stringArg), stdin);
    stringArg[strlen(stringArg)-1] = '\0';
    
    int strLength = strlen(stringArg);

    while(strLength >= 0){
        printf("%c", stringArg[strLength]);
        strLength--;
    }
    
}