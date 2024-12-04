#include <stdio.h>

int power(int x, int y);

int power(int x, int y){
    int res = 1;
    for(int i = 1; i <= y; i++){
        res *= x;
    }
    return res;
}

int main(){

    int num1, num2, res = 0;
    printf("Enter a base, then expo: ");
    scanf("%d%d", &num1, &num2);
    res = power(num1, num2);
    printf("Result: %d", res);
}