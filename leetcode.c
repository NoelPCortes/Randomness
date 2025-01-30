#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL){
        printf("Memmory not allocated.\n");
        return 1;
    }

    for(int i = 0; i < 10; i++){
        ptr[i] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;

}