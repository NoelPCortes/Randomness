#include <stdio.h>
#include <math.h>

int findSquared(int *);

int main(){

    int num = 20;
    int *pNum = NULL;
    pNum = &num;

    int res = findSquared(pNum);

    printf("Result: %d", res);

}

int findSquared(int *num){
    return pow(*num, 2);
}