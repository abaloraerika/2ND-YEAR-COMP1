#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, answer;
    int n;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type the exponent of the number: ";
    cin >> n;
    
    answer = pow(x, n);
    
    cout << "The answer is " << answer << ".";

    return 0;
}
