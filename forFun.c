#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;
    }

    // Check for factors of num
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
