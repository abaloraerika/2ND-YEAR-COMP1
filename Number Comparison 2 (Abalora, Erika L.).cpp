#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // Create a program that will determine which is Larger between 2 numbers.
    int first_num, second_num;
    cout << "Type the first number: ";
    cin >> first_num;
    cout << "Type the second number: ";
    cin >> second_num;

    if (first_num > second_num) {
        cout << first_num << " is larger than " << second_num << ".\n";
    } 
    else if (second_num > first_num) {
        cout << second_num << " is larger than " << first_num << ".\n";
    } 
    else {
        cout << "Both numbers are equal.";
    }

    cout << "End of Program"; // Added as per your request

    return 0;
}
