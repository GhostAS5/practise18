#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    stringstream ss(input);
    string word;

    while (ss >> word) {
        count++;
    }

    cout << "Number of words: " << count << endl;

    return 0;
}