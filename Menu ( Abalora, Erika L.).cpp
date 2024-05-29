#include <iostream>
using namespace std;

int main() {
    string choice;
    float amount, change;

    cout << "\tMenu\n";
    cout << "[1] Chicken Salad with rice P50\n";
    cout << "[2] Pork Caldereta with rice P90\n";
    cout << "[3] Fish Fillet with rice P40\n";
    cout << "Type your choice: ";
    cin >> choice;

    switch (choice[0]) {
        case '1':
            cout << "You need to pay P50.00 for your meal\n";
            cout << "How much is your money? ";
            cin >> amount;
            change = amount - 50;
            cout << "Your change is " << change << ".\nThank you for your order.\n";
            break;
        case '2':
            cout << "You need to pay P90.00 for your meal\n";
            cout << "How much is your money? ";
            cin >> amount;
            change = amount - 90;
            cout << "Your change is " << change << ".\nThank you for your order.\n";
            break;
        case '3':
            cout << "You need to pay P40.00 for your meal\n";
            cout << "How much is your money? ";
            cin >> amount;
            change = amount - 40;
        cout << "Your change is " << change << ".\nThank you for your order.\n";
                break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    return 0;
}
