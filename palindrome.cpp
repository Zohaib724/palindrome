#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int n = str.size();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << (isPalindrome(input) ? "The string is a palindrome." : "The string is not a palindrome.") << std::endl;

    return 0;
}

