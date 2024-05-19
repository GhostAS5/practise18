#include <iostream>
#include <string>

using namespace std;

string changeCase(const string &input) {
    string result;
    for (char c : input) {
        // Check if the character is uppercase
        if (isupper(c)) {
            result += tolower(c);
        }
        // Check if the character is lowercase
        else if (islower(c)) {
            result += toupper(c);
        } else {
            // If it's not an alphabetic character, leave it unchanged
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = changeCase(input);
    cout << "Result-> " << output << endl;

    return 0;
}