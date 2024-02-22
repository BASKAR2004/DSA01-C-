#include <iostream>

int main() {
    int n;
    n=-4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "   * ";
        }
        std::cout << std::endl;
    }

    return 0;
}
