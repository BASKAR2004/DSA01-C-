#include <iostream>

void printDiamond(int n) {
    if (n % 2 == 0) {
        std::cout << "Please enter an odd number for a diamond shape." << std::endl;
        return;
    }

    int spaces = n / 2;
    int stars = 1;

    // Print the top half of the diamond
    for (int i = 0; i < n / 2 + 1; ++i) {
        for (int j = 0; j < spaces; ++j) {
            std::cout << " ";
        }

        for (int j = 0; j < stars; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
        spaces--;
        stars += 2;
    }

    // Print the bottom half of the diamond
    spaces = 1;
    stars = n - 2;

    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < spaces; ++j) {
            std::cout << " ";
        }

        for (int j = 0; j < stars; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
        spaces++;
        stars -= 2;
    }
}

int main() {
    int n;

    // Get the size of the diamond from the user
    std::cout << "Enter the size of the diamond (odd number): ";
    std::cin >> n;

    // Print the diamond
    printDiamond(n);

    return 0;
}

