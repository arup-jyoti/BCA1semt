/*Write a program that takes an integer as input and checks if it is a prime number.*/

#include <stdio.h>

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    int isPrime = 1; // Assume the number is prime initially

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Number is divisible by i, so it's not prime
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
