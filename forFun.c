#include <stdio.h>

int printNumbers(int num);

int main() {

    printNumbers(50);
    
}

int printNumbers(int num) {
    printf("%d ", printNumbers(num - 1));
}