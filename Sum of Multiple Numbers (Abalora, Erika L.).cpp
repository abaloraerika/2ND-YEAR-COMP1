#include<iostream>
using namespace std;

int main() {
    int num_data, i = 1;
    float num, sum = 0;
    cout << "How many numbers do you want to add? ";
    cin >> num_data;
    while(i <= num_data) {
        cout << "Type a number: ";
        cin >> num;
        sum = sum + num;
        ++i;
    }
    cout << "The sum of the numbers is " << sum << ".";
    return 0;
}
