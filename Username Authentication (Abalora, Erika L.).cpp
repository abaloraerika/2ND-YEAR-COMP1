#include <iostream>
using namespace std;

int main() {
    string username;
    cout << "Enter your username: ";
    cin >> username;

    if (username == "Transmit") {
        cout << "Welcome Transmit";
    } else if (username == "Admin") {
        cout << "Welcome Admin";
    } else {
        cout << "Not the user";
    }

    return 0;
}
