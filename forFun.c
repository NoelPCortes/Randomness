#include <stdio.h>

int printNumbers(int num);

int main() {

    int numArg;

    printf("Enter an integer to be factorialized: ");
    scanf("%d", &numArg);

    int res = printNumbers(numArg);
    
    printf("%d\n", res);

}

int printNumbers(int num) {
    
}