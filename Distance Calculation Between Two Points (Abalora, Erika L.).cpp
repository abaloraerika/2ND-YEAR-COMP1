#include<iostream>
#include<cmath>
using namespace std;

//distance
int main()
{
    float x1, x2, y1, y2, distance;
    cout << "Type the value of x1: ";
    cin >> x1;
    cout << "Type the value of x2: ";
    cin >> x2;
    cout << "Type the value of y1: ";
    cin >> y1;
    cout << "Type the value of y2: ";
    cin >> y2;

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    cout << "The computed distance is " << distance << ".";
    
    return 0;
}
