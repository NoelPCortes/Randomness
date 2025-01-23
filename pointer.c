#include <stdio.h>
#include <math.h>

int main(){

    int num;

    printf("input any number\nit'll find the perfect number\nin that range starting from 0: ");
    scanf("%d", &num);

    printf("These are the perfect number.\n");

    for(int i = 1; i <= num; i++){
        int result = 0;
        for(int j = 1; j < i/2; j++){
            if(i % j == 0){
                result += j;
            }
        }
        if(result == i){
            printf("%d\n", i);
        }
    }

}