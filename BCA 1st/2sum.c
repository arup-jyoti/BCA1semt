/*Write a program to take input of two numbers and print their sum, product, difference*/

#include <stdio.h>

int main() {
    double num1, num2;

    // Taking input from the user
    printf("\nEnter the first number: ");
    scanf("%lf", &num1);

    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

    // Calculating and printing the sum, product, and difference
    double sum = num1 + num2;
    double product = num1 * num2;
    double difference = num1 - num2;

    printf("Sum: %.2lf\n", sum);
    printf("Product: %.2lf\n", product);
    printf("Difference: %.2lf\n", difference);

    return 0;
}
