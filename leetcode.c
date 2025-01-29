#include <stdio.h>

int singleNumber(int* nums, int numsSize);

int main(){

    int nums[10], numsSize;

    printf("Enter size of array: ");
    scanf("%d", &numsSize);

    for(int i = 0; i < numsSize; i++){
        printf("Element %d - ", i + 1);
        scanf("%d", &nums[i]);
    }

    int singleNum = 0;
    
    singleNum = singleNumber(nums, numsSize);

    printf("%d", singleNum);

}

int singleNumber(int* nums, int numsSize) {
    int min_num[numsSize];
    for(int i = 0; i < numsSize; i++){
        min_num[i] = 1;
    }
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(nums[i] == nums[j + i]){
                min_num[i]++;
            }
        }
    }
    for(int i = 0; i <= numsSize; i++){
        if(min_num[i] < min_num[i + 1]){
            return nums[i];
        }
    }
}