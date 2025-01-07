#include <stdio.h>
#include <math.h>

int squared_numbers(int *, int);

int main(){

    int number_arr[6] = {1, 2, 3, 4, 5, 6};

    int *pNumber_arr = NULL;
    pNumber_arr = &number_arr;

    int (*arr_squared)(int, int);
    arr_squared = &squared_numbers;

    int length = sizeof(number_arr)/sizeof(number_arr[0]);

    (arr_squared)(pNumber_arr, length);

    for(size_t i = 0; i < length; i++){
        printf("%5d", number_arr[i]);
        printf("%p", pNumber_arr[i]);
    }

}

int squared_numbers(int number_arr[], int arr_lenth){
    for(size_t i = 0; i < arr_lenth; i++){
        number_arr[i] = pow(number_arr[i], 2);
    }
}