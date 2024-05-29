#include <iostream>
using namespace std;

double calculateDiscount(double amount) {
    double discountRate;
    double netPayable;

    if (amount >= 0 && amount <= 1000) {
        discountRate = 0.05; // 5% discount
    } else if (amount > 1000 && amount <= 4999) {
        discountRate = 0.10; // 10% discount
    } else if (amount > 4999) {
        discountRate = 0.15; // 15% discount
    }

    netPayable = amount - (amount * discountRate);
    return netPayable;
}

int main() {
    double purchaseAmount;
    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    double discountedAmount = calculateDiscount(purchaseAmount);
    cout << "The discounted amount net payable is: " << discountedAmount << endl;

    return 0;
}
