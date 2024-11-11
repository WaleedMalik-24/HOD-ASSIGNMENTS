#include <stdio.h>
#include <math.h>

int main() {
    int choice, number;

    // Display menu
    printf("Choose an operation by entering a number (1-3):\n");
    printf("1. Calculate square root of a number\n");
    printf("2. Calculate the cube of a number\n");
    printf("3. Print a number 50 times\n");

    // Take user input for choice and number
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2 || choice == 3) {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Switch case to perform different operations
        switch (choice) {
            case 1:
                // Calculate the square root of the number
                if (number < 0) {
                    printf("Cannot calculate square root of a negative number.\n");
                } else {
                    printf("The square root of %d is %.2f\n", number, sqrt(number));
                }
                break;
            case 2:
                // Calculate the cube of the number
                printf("The cube of %d is %d\n", number, number * number * number);
                break;
            case 3:
                // Print the number 50 times
                printf("Printing %d 50 times:\n", number);
                for (int i = 0; i < 50; i++) {
                    printf("%d ", number);
                }
                printf("\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } else {
        printf("Invalid choice. Please enter a number between 1 and 3.\n");
    }

    return 0;
}

