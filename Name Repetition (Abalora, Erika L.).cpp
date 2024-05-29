#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Type your Name: ";
    cin >> name;
    for (int i = 0; i < 10; i++) {
        cout << "My name is " << name << ".\n";
    }
    return 0;
}
