#include <stdio.h>

int computeSum(int *, int *);

int main(){

    int num1 = 5, num2 = 10;

    int (*ptrFunc)(int *, int*) = NULL;//Pointer function to computeSum
    ptrFunc = &computeSum;//Storing the memory address of computeSum function

    printf("Sum of %d and %d is %d\n", num1, num2, (*ptrFunc)(&num1, &num2));//How to call a function pointer

}

int computeSum(int *n1, int *n2){
    return *n1 + *n2;//return the memory address of n1 and n2
}