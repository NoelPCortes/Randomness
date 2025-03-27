#include <stdio.h>

void strArgs(int* strArg[]){
    strArg[0] = 0;
}

int main(){

    int strArg[5] = {1,2,3,4,5};

    //strArgs(strArg);

    printf("strArg[0] = %d\n", strArg[0]);

}