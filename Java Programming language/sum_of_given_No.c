#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of all numbers up to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output
    printf("Sum of all numbers up to %d is: %d\n", n, sum);

    return 0;
}
