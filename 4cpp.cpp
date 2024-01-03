#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend and divisor: ";
    cin >> dividend >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient: " << quotient << std::endl;
    cout << "Remainder: " << remainder << std::endl;
    return 0;
}

