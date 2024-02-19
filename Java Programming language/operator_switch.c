#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operation;

    // Input
    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);  // Note the space before %c to consume any leading whitespace

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    // Switch statement to perform the operation
    switch (operation) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1; // Exit the program with an error code
    }

    // Output
    printf("Result: %.2f\n", result);

    return 0;
}
