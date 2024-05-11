#include <iostream>
using namespace std;

void printCalendar(const char* month, const char* days[], int daysInMonth) {
    cout << "\t\t\t" << month << "\n";
    cout << "\tS\tM\tT\tW\tT\tF\tS\n";

    int dayCounter = 1;
    for (int week = 0; week < 5; ++week) {
        for (int day = 0; day < 7; ++day) {
            if (dayCounter <= daysInMonth) {
                cout << "\t" << dayCounter;
                ++dayCounter;
            } else {
                cout << "\t";
            }
        }
        cout << "\n";
    }
}

int main() {
    const char* daysOfWeek[] = { "S", "M", "T", "W", "T", "F", "S" };

    // January
    printCalendar("January", daysOfWeek, 31);

    // February
    cout << "\n";
    printCalendar("February", daysOfWeek, 28); // Leap year adjustment

    // March
    cout << "\n";
    printCalendar("March", daysOfWeek, 31);

    // April
    cout << "\n";
    printCalendar("April", daysOfWeek, 30);

    // May
    cout << "\n";
    printCalendar("May", daysOfWeek, 31);

    // June
    cout << "\n";
    printCalendar("June", daysOfWeek, 30);

    // July
    cout << "\n";
    printCalendar("July", daysOfWeek, 31);

    // August
    cout << "\n";
    printCalendar("August", daysOfWeek, 31);

    // September
    cout << "\n";
    printCalendar("September", daysOfWeek, 30);

    // October
    cout << "\n";
    printCalendar("October", daysOfWeek, 31);

    // November
    cout << "\n";
    printCalendar("November", daysOfWeek, 30);

    // December
    cout << "\n";
    printCalendar("December", daysOfWeek, 31);

    return 0;
}
