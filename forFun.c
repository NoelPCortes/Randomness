#include <stdio.h>

int Fibonacci(int );

int main(){

    int numArg;

    printf("Input number of terms for the Series (< 20) : ");
    scanf("%d", &numArg);

    printf("Fibonacci Series: ");

    int i;

    for(i = 0; i < numArg; i++){
        printf("%d ", Fibonacci(i));
    }

}

int Fibonacci(int num){
    if(num == 1 || num == 0) {
        return 1;
    }
    return Fibonacci(num - 1) + Fibonacci(num - 2);
}