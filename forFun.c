#include <stdio.h>

int sumOfDigits(int );

int main() {
    int numArg;

    scanf("%d", &numArg);

    int res = sumOfDigits(numArg);

    printf("%d\n", res);

}

int sumOfDigits(int num){
    int sum = 0;
    while(num != 0){
        int temp = num % 10;
        num /= 10;
        sum += temp;
    }
    return sum;
}