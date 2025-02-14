#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int arr_size_t;
    
    printf("Enter size of Array: ");
    scanf("%d", &arr_size_t);
    
    int *arrArg = (int *)malloc(arr_size_t * sizeof(int));
    if(arrArg == NULL){
        printf("MEMORY ALLOCATION FAILED.\n");
        return 1;
    }
    
    int i = 0;
    
    while(arr_size_t > 0){
        scanf("%d", &arrArg[i]);
        i++;
        arr_size_t--;
    }
    
    for(i = 0; i < arr_size_t; i++){
        printf("%d\n", arrArg[i]);
        printf("%p\n", (void*)&arrArg[i]);
    }
    
    free(arrArg);
    
}