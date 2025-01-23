#include <stdio.h>
#include <math.h>

int main(){

    int num, result = 0;

    printf("input any number\nit'll find the perfect number\nin that range starting from 0: ");
    scanf("%d", &num);

    printf("These are the perfect number.\n");

    for(int i = 2; i <= num; i++){
        if(i % i == 0){
            result += i;
        }
        if(result == num){
            printf("%d ", result);
            result = 0;
        }
    }

}