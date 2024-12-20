// Online C compiler to run C program online
#include <stdio.h>

int main(){

    int arr[5], length = sizeof(arr)/sizeof(arr[0]), uniqueArr[5];
    
    for(int i = 0; i < length; i++){
        printf("Element %d - ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < length; i++){
        for(int j = 0;j < length; j++){
            if(arr[i] == arr[j + i + 1] || arr[i] == arr[((j + i) + 1) - 2]){
                break;
            }
            else{
                uniqueArr[i] = arr[i];
            }
        }
    }
    
    int lengthUniqueArr = sizeof(uniqueArr)/sizeof(uniqueArr[0]);
    
    printf("The unique elements found in the array are: ");
    for(int i = 0; i < lengthUniqueArr; i++){
        if(uniqueArr[i] != 0){
            printf("%2d", uniqueArr[i]);
        }
    }
    
}