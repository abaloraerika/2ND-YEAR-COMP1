#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Create a program that would determine if the number assigned to 'x' is a positive number.
    int x;
    cout << "Type a number: ";
    cin >> x;
    if (x > 0) {
        cout << "The number is positive.";
    }
    return 0;
}
