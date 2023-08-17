/*Write a program that takes two integers as input and finds their greatest common divisor
(GCD) using nested while loops and if statements.*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int gcd;

    // Calculate GCD using Euclidean algorithm with nested while loops
    int smaller = (num1 < num2) ? num1 : num2;
    int i = 1;
    while (i <= smaller) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    }

    printf("Greatest Common Divisor (GCD) of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
