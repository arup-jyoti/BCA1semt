/*Write a program to ask the user for an input to stop a loop or continue repeating after
printing the iteration count using a do-while loop.*/

#include <stdio.h>

int main() {
    int iteration = 0;
    char choice;

    do {
        iteration++;
        printf("Iteration count: %d\n", iteration);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    printf("Loop stopped.\n");

    return 0;
}
