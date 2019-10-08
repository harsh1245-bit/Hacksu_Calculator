#include <iostream>

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            std::cout << num1+num2;
            break;
        case '-':
            std::cout << num1-num2;
            break;
        case '*':
            std::cout << num1*num2;
            break;
        case '/':
            std::cout << num1/num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            std::cout << "Error! Operator is not correct!" << std::endl;
            break;
    }

    return 0;
}