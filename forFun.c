#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main(){

    int num1 = rand() % 10 + 1, num2 = rand() % 10 + 1;

    int (*arr_operator[])(int, int) = {add, subtract, multiply, divide};

    int res;
    res = (*arr_operator[0])(num1, num2);

    printf("%d + %d = %d\n", num1, num2, res);

    res = (*arr_operator[1])(num1, num2);

    printf("%d - %d = %d\n", num1, num2, res);

    res = (*arr_operator[2])(num1, num2);

    printf("%d x %d = %d\n", num1, num2, res);

    res = (*arr_operator[3])(num1, num2);

    printf("%d / %d = %d\n", num1, num2, res);

}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int x, int y){
    return x / y;
}