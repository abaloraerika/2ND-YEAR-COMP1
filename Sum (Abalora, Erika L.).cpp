#include <iostream>
using namespace std;

int main() {
    //sum with Loop
    string choice;
    float num1, num2, sum;
    do {
        cout << "Type the first number: ";
        cin >> num1;
        cout << "Type the second number: ";
        cin >> num2;
        sum = num1 + num2;  // Corrected the operation to addition
        cout << "The sum of the two numbers is " << sum << ". \n";
        cout << "\n\nDo you want to try again [Y/y for Yes and Type any key to exit]? ";
        cin >> choice;
    } while (choice == "Y" || choice == "y");
    cout << "Thank you for using this program.";
    return 0;
}
