#include <stdio.h>
#include <string.h>

int main(){
    
    char arrArg[15];
    
    fgets(arrArg, sizeof(arrArg), stdin);
    arrArg[strlen(arrArg)-1] = '\0';
    
    int a, ctr = 0;
    
    for(a = 0; a < 15; a++){
        if(arrArg[a] == 'a' ||arrArg[a] == 'e' ||arrArg[a] == 'i' ||arrArg[a] == 'o' ||arrArg[a] == 'u' || arrArg[a] == 'A' ||arrArg[a] == 'E' ||arrArg[a] == 'I' ||arrArg[a] == 'O' ||arrArg[a] == 'U') {
            printf("%c\n", arrArg[a]);
            ctr++;
        }
    }
    
    printf("%d\n", ctr);
    
}