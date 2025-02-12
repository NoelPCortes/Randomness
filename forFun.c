#include <stdio.h>

int main(){
    
    int i, j;
    
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(i == j) {
                printf("%2d ", 0);
            } else if(j > i) {
                printf("%2d ", -1);
            } else {
                printf("%2d ", 1);
            }
        }
        printf("\n");
    }
    
}