#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Check if the number of terms is non-negative
    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
