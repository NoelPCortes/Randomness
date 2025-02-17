#include <stdio.h>

int exponent(int numA, int numB);

int main() {

    int numArgA, numArgB;

    scanf("%d %d", &numArgA, &numArgB);

    int res = exponent(numArgA, numArgB);

    printf("%d\n", res);

}

int exponent(int numA, int numB){
    int a;
    int res = 1;
    for(a = 1; a <= numB; a++){
        res *= numA;
    }
    return res;
}