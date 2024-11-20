#include <stdio.h>

int main(){

    int num, i = 1;

    printf("Enter how many rows: ");
    scanf("%d", &num);

    do{
        for(int j = 1; j <= num * 2 - 1; j++){
            if(j >= num - i + 1 && j <= num + i - 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        i++;
    }while(i <= num);
}