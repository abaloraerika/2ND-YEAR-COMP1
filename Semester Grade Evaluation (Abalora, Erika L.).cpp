#include <iostream>
using namespace std;

int main() {
    // Passed or Failed
    float g1, g2, g3, g4, g5, average;
    cout << "Type your grade in Filipino: ";
    cin >> g1;
    cout << "Type your grade in English: ";
    cin >> g2;
    cout << "Type your grade in Science: ";
    cin >> g3;
    cout << "Type your grade in Mathematics: ";
    cin >> g4;
    cout << "Type your grade in History: ";
    cin >> g5;

    average = (g1 + g2 + g3 + g4 + g5) / 5;
    if (average >= 75) {
        cout << "Congratulations, You passed the semester!";
    } 
    else {
        cout << "You failed the semester. Better luck next time.";
    }

    return 0;
}
