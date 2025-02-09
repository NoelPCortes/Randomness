#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char strArg[50];
    
    printf("Enter a string: ");
    fgets(strArg, sizeof(strArg), stdin);
    strArg[strlen(strArg)-1] = '\0';
    
    const int length = strlen(strArg); 
    int i = 0, vowelCtr = 0;
    
    while(i < length){
        if(tolower(strArg[i]) == 'a' || tolower(strArg[i]) == 'e' || tolower(strArg[i]) == 'i' || tolower(strArg[i]) == 'o' || tolower(strArg[i]) == 'u' ){
            vowelCtr++;
        }
        i++;
    }
 
    printf("The number of vowels in the string is: %d\n", vowelCtr);
    
}