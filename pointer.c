// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    printf("Pointer : Demonstrate the use of & and * operator :\n--------------------------------------------------------\n");
    
    int m = 300;
    float fx = 300.60;
    char cht = 'z';

    printf("m = %d\nfx = %f\ncht = %c\n", m, fx, cht);
    
    int *pM = NULL;
    float *pFx = NULL;
    char *pCht = NULL;
    
    
    printf("\nUsing & operator :\n");
    printf("-------------------------------------------------------- \n");
    
    printf("address of m = %p\naddress of fx = %p\naddress of cht = %p\n", &m, &fx, &cht);
    
    printf("\nUsing & and * operator:\n");
    printf("-------------------------------------------------------- \n");
    
    pM = &m;
    pFx = &fx;
    pCht = &cht;
    
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    printf("\nUsing only pointer variable:\n");
    printf("-------------------------------------------------------- \n");

    printf("address of m = %p\naddress of fx = %p\naddress of cht = %p\n", pM, pFx, pCht);

    printf("\nUsing only pointer operator:\n");
    printf("-------------------------------------------------------- \n");

    printf("value at address of m = %d\n", *pM);
    printf("value at address of fx = %f\n", *pFx);
    printf("value at address of cht = %c\n", *pCht);

    return 0;
}