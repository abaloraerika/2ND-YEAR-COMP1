#include <iostream>
using namespace std;

int main() {
    float salary, years, bonus;
    cout << "Years of Service in the company: ";
    cin >> years;

    if (years > 5) {
        cout << "Type your salary per month: ";
        cin >> salary;
        bonus = salary * 0.05;
        cout << "You can claim your " << bonus << " bonus.";
    } 
    else {
        cout << "You are not qualified for the bonus, \n Thank you.";
    }

    return 0;
}
