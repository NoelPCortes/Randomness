#include <string.h>
#include <stdio.h>

int main(){
    
    int i = 0, length, palindromeCheck;
    char strArg[50];
    
    printf("Enter a string: ");
    fgets(strArg, sizeof(strArg), stdin);
    strArg[strlen(strArg)-1] = '\0';
    
    length = strlen(strArg);
    
    while(length > 0) {
        if(strArg[i] == strArg[length - 1]){
            palindromeCheck = 1;
        } else {
            palindromeCheck = 0;
        }
        i++;
        length--;
    }
    
    if(palindromeCheck == 1) {
        printf("Yes");
    } else {
        printf("No");
    }
    
}