#include <iostream>
#include <string>

std::string decimalToHexadecimal(int decimalNum) {
    std::string hexResult = "";
    while (decimalNum > 0) {
        int remainder = decimalNum % 16;
        char hexDigit = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
        hexResult = hexDigit + hexResult;
        decimalNum /= 16;
    }
    return (hexResult.empty()) ? "0" : hexResult;
}
int main() {
    int decimalNumber = 255;
    std::string hexadecimalResult = decimalToHexadecimal(decimalNumber);
    std::cout << "The hexadecimal representation of " << decimalNumber << " is " << hexadecimalResult << std::endl;

    return 0;
}

