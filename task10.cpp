#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left]!= str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}