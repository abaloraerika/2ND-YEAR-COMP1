#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string username = "spiderman", password = "venom";
    string u_name, p_word;
    cout << "Username: ";
    cin >> u_name;
    cout << "Password: ";
    cin >> p_word;

    if (u_name == username && p_word == password) {
        cout << "Login successfully!";
    } else {
        cout << "Your username and password are invalid! \n Please try again.";
    }

    return 0;
}
