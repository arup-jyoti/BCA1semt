/*Write a program to take a number as input and print all the even numbers up to that number
using while and for loop.*/

#include <stdio.h>

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even numbers using while loop:\n");
    int i = 2; // Start from the first even number
    while (i <= num) {
        printf("%d\n", i);
        i += 2; // Increment by 2 to get the next even number
    }

    printf("\nEven numbers using for loop:\n");
    for (int j = 2; j <= num; j += 2) {
        printf("%d\n", j);
    }

    return 0;
}
