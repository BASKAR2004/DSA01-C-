#include <iostream>
using namespace std;
bool isPatternMatch( string& input, string& pattern) {
    size_t inputLength = input.length();
    size_t patternLength = pattern.length();

    for (size_t i = 0; i <= inputLength - patternLength; ++i) {
        size_t j;
        for (j = 0; j < patternLength; ++j) {
            if (input[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLength) {
            return true;
        }
    }
    return false;
}
int main() {
    string input = "hello world";
    string pattern = "welcome";
    if (isPatternMatch(input, pattern)) {
        cout << "String matches the pattern." << endl;
    } else {
        cout << "String does not match the pattern." << endl;
    }

    return 0;
}

