/*#include <stdio.h>
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
    
}*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int size_arr, num_arr;
    
    printf("Enter array size: ");
    scanf("%d", &size_arr);
    
    int *pSize_arr = (int *)malloc(size_arr * sizeof(int));
    if(pSize_arr == NULL){
        printf("Memory Allocation failed.\n");
        return 1;
    }
    
    printf("%lu\n", size_arr * sizeof(pSize_arr));
    
    int i = 0, a = 0;
    
    while(i < size_arr){
        printf("Element %d : ", i + 1);
        scanf("%d", &pSize_arr[i]);
        i++;
    }
    
    printf("Memoery Address of Arr: %p\n", pSize_arr);
    
    while(a < size_arr){
        printf("Each Array Memory Address: %p\n", pSize_arr[a]);
        printf("Element %d : %d\n", a + 1, pSize_arr[a]);
        a++;
    }
    
    free(pSize_arr);
    
}
