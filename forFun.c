#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef char chars[100];

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int (*select_opetator())(int, int);

int main(){

    srand(time(NULL));

    //randomly put in numbers inside the variables
    int num1 = rand() % 10 + 1, num2 = rand() % 10 + 1;

    int (*operation)(int, int) = select_opetator();

    int res = operation(num1, num2);
    printf("Result: %d", res);
}

int (*select_opetator())(int x, int y){
    chars string[] = {"Enter the number to choose the operator", "1)Add (+)", "2)Subtract (-)",
    "3) Multiply (x)", "4) Divide (/)"};
    //prints the string array
    int length = sizeof(string)/sizeof(string[0]) + 1;
    for(int i = 0; i < length; i++){
        printf("%s\n", string[i]);
    }

    //randomly chooses operators
    int option = rand() % 3;
    switch(option){
        case 0: return add;
        case 1: return subtract;
        case 2: return multiply;
        case 3: return divide;
    }
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