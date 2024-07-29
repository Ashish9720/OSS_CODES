#include <iostream>
#include <cmath>

int main() {
    float valueOne;
    float valueTwo;
    char operation;
    float answer;

    std::cout << "Enter calculation (e.g., 5.0 + 3.0):\n";

    // Read input from the user
    std::cin >> valueOne >> operation >> valueTwo;

    // Perform the calculation based on the operator
    switch (operation) {
        case '/':
            if (valueTwo != 0) {
                answer = valueOne / valueTwo;
            } else {
                std::cout << "Error: Division by zero.\n";
                return 1; // Exit with an error code
            }
            break;
        case '*':
            answer = valueOne * valueTwo;
            break;
        case '+':
            answer = valueOne + valueTwo;
            break;
        case '-':
            answer = valueOne - valueTwo;
            break;
        case '^':
            answer = std::pow(valueOne, valueTwo);
            break;
        case ' ':
            answer = std::sqrt(valueTwo);
            break;
        default:
            std::cout << "Fail: Unknown operator.\n";
            return 1; // Exit with an error code
    }

    // Print the result
    std::cout << valueOne << ' ' << operation << ' ' << valueTwo << " = " << answer << '\n';

    return 0; // Successful execution
}
