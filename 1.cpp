#include <iostream>
using namespace std;

int main() {
    double x, y, result;
    char op;

    cout << "****** CALCULATOR ******" << endl;

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        result = x + y;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = x - y;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = x * y;
        cout << "Result: " << result << endl;
        break;
    case '/':
        if (y == 0) {
            cout << "Error: Division by zero!" << endl;
        }
        else {
            result = x / y;
            cout << "Result: " << result << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
        return 1;
    }
    return 0; 
}
