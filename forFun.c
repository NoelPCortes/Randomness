#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int num;
    scanf("%d", &num);

    for(int i = num; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}