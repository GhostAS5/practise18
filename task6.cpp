#include <iostream>
#include <string>

using namespace std;

bool checkSeparatedByTwo(const string& str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 'e' && i + 2 < str.length() && str[i + 2] == 'g') {
            return true;
        }
        if (str[i] == 'g' && i - 2 >= 0 && str[i - 2] == 'e') {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (checkSeparatedByTwo(input)) {
        cout << input << " -> 1" << endl;
    } else {
        cout << input << " -> 0" << endl;
    }

    return 0;
}