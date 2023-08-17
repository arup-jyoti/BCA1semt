/*Write a program that calculates the sum of the first n terms of the Fibonacci sequence, where
n is entered by the user, using a for-loop.*/

#include <stdio.h>

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int term1 = 0, term2 = 1, nextTerm;
    int sum = term1 + term2;

    for (int i = 3; i <= n; i++) {
        nextTerm = term1 + term2;
        sum += nextTerm;

        term1 = term2;
        term2 = nextTerm;
    }

    printf("Sum of the first %d terms of the Fibonacci sequence: %d\n", n, sum);

    return 0;
}
