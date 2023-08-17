/*Write a program to find the maximum, minimum, sum and average of n numbers without
using array.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int number, sum = 0, max, min;
    double average;

    printf("Enter number 1: ");
    scanf("%d", &number);

    sum = max = min = number;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        sum += number;

        if (number > max) {
            max = number;
        }

        if (number < min) {
            min = number;
        }
    }

    average = (double) sum / n;

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
