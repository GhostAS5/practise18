#include <iostream>
#include <string>

using namespace std;

string insertDashBetweenOdds(const string &input) {
    string result;
    int length = input.length();

    for (int i = 0; i < length; ++i) {
        result += input[i];
        
        if (i < length - 1 && (input[i] - '0') % 2 != 0 && (input[i + 1] - '0') % 2 != 0) {
            result += '-';
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string of numbers: ";
    cin >> input;

    string output = insertDashBetweenOdds(input);
    cout << "Result-> " << output << endl;

    return 0;
}