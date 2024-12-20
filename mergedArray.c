#include <stdio.h>

int main(){

    int arr1[3], lengthArr1 = sizeof(arr1)/sizeof(arr1[0]), arr2[3], lengthArr2 = sizeof(arr2)/sizeof(arr2[0]);
    int mergedArray[lengthArr1 + lengthArr2], lengthMerged = sizeof(mergedArray)/sizeof(mergedArray[0]);

    printf("\nInput the number of elements to be stored in the first array :\n");
    printf("Input three elements in the array:\n");
    for(int i = 0; i < lengthArr1; i++){
        printf("Element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nInput the number of elements to be stored in the second array :\n");
    printf("Input three elements in the array:\n");
    for(int i = 0; i < lengthArr2; i++){
        printf("Element - %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < lengthArr1; i++){
        mergedArray[i] = arr1[i];
    }

    for(int i = 0; i < lengthArr2; i++){
        mergedArray[lengthArr1 + i] = arr2[i];
    }

    int temp;

    for(int i = 0; i < lengthMerged - 1; i++){
        for(int j = 0; j < lengthMerged - 1; j++){
            if(mergedArray[j] < mergedArray[j + 1]){
                temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    printf("The merged array in decending order is :\n");
    
    for(int i = 0; i < lengthMerged; i++){
        printf("%2d", mergedArray[i]);
    }

}