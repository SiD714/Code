#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate and print the factorial
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}
