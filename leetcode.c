#include <stdio.h>

void moveZeroes(int* nums, int numsSize);

int main(){

    int num, numArr[100];

    printf("How many numbers do you want to input? ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("Enter number: ");
        scanf("%d", &numArr[i]);
    }

    moveZeroes(numArr, num);

}

void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0) {
            // Swap the current element with the element at lastNonZeroFoundAt
            if(i != lastNonZeroFoundAt) {
                int temp = nums[i];
                nums[i] = nums[lastNonZeroFoundAt];
                nums[lastNonZeroFoundAt] = temp;
            }
            lastNonZeroFoundAt++;
        }
    }
    for(int i = 0; i < numsSize; i++){
        printf("%d\n", nums[i]);
    }
}