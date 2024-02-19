#include<iostream>
using namespace std;

int main() {
    float operand1, operand2, result;
    char operation;

    // Input
    cout << "Enter first operand: ";
    cin >> operand1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second operand: ";
    cin >> operand2;

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
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            return 1; // Exit the program with an error code
    }

    // Output
    cout << "Result: " << result << endl;

    return 0;
}
