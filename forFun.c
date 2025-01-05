#include <stdio.h>

void function(int num){
    printf("Value of variable: %d\nAddress of Variable %p\n", num, &num);
}

int main(){

    int num;

    void (*function_pointer)(int);

    function_pointer = &function;

    printf("Enter a number to be printed: ");
    scanf("%d", &num);

    (*function_pointer)(num);

}