#include <stdio.h>

int *getArr(int value){

    int *arr = malloc(sizeof(int) * 5);

    for(int i = 0; i < 5; i++){
        arr[i] = value;
    }

    return arr;

    free(arr);
}

int main(){
    
    int arr[] = {1,2,3,4,5};
    
    int *result = getArr(4);

    for(int i = 0; i < 5; i++){
        printf("Result[%d]: %d\n", i , result[i]);   
    }

    return 0;
}