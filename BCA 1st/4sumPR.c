/*Write a program to print the sum and product of digits of an integer.*/

#include <stdio.h>

int main() {
    int num, originalNum;
    int sum = 0, product = 1;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for later

    // Calculating the sum and product of digits
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    // Printing the results
    printf("Sum of digits of %d = %d\n", originalNum, sum);
    printf("Product of digits of %d = %d\n", originalNum, product);

    return 0;
}
