#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int);

int main(){

    int x = 121;

    bool isTrue = isPalindrome(x);

    if(isTrue){
        printf("true\n");
    }

}

bool isPalindrome(int x) {
    char *stringArg = (char *)malloc(100 * sizeof(char));
    int i = 0;
    if(x < 0){
        stringArg[i++] = '-';
    }
    while(x != 0){
        int *pX = &x;
        if(*pX % 10 == 0){
            stringArg[i++] = '0';
        }
        stringArg[i++] = x % 10;
    } 

    printf("%s\n", stringArg);

    free(stringArg);

    return 0;
}