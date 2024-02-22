#include <iostream>
using namespace std;
void printDiamond(int n) {
    if (n % 2 == 0) {
        cout << "Please enter an odd number for a diamond shape." << endl;
        return;
    }
    int spaces = n / 2;
    int stars = 1;
    for (int i = 0; i < n / 2 + 1; ++i) {
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }

        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }

        cout << std::endl;
        spaces--;
        stars += 2;
    }
    spaces = 1;
    stars = n - 2;

    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }

        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }

        cout << endl;
        spaces++;
        stars -= 2;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond (odd number): ";
    cin >> n;
    printDiamond(n);

    return 0;
}

