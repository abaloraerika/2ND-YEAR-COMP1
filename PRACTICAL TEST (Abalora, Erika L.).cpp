#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    char username[20], password[20], op;
    double num1, num2, result;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (strcmp(username, "admin7") == 0 && strcmp(password, "admin12345") == 0) {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Type the first number: ";
        cin >> num1;
        cout << "Type the second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                cout << "Sum: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Difference: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Product: " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Quotient: " << result << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;
            default:
                cout << "Error! Invalid operator." << endl;
                break;
        }
    } else {
        cout << "Invalid login, please try again." << endl;
    }

    return 0;
}
