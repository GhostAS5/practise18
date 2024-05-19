#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a string: ";
    cin >> input;

    for (char c : input) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;

    return 0;
}