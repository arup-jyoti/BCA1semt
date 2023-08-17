/*Write a program to find the smallest or greatest of three numbers given as input.*/

#include <stdio.h>
int main()
 {
    double num1, num2, num3;

    // Taking input from the user
    printf("\nEnter the first number: ");
    scanf("%lf", &num1);

    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

    printf("\nEnter the third number: ");
    scanf("%lf", &num3);

    // Finding the smallest and greatest numbers
    double smallest = num1;
    double greatest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }

    // Printing the results
    printf("Smallest number: %.2lf\n", smallest);
    printf("Greatest number: %.2lf\n", greatest);

    return 0;
}
