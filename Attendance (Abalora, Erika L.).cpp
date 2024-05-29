#include <iostream>
using namespace std;

int main() {
    float c_held, c_attended, percentage;
    cout << "Number of classes held: ";
    cin >> c_held;
    cout << "Number of classes attended: ";
    cin >> c_attended;
    percentage = (c_attended / c_held) * 100;
    cout << "Attendance percentage: " << percentage << "%\n";

    if (percentage >= 75) {
        cout << "You are allowed to sit in the exam.";
    } 
    else {
        cout << "Sorry, you are not allowed. Attend more classes from next time.";
    }

    return 0;
}
