#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int sumOfNumbersInString(const string& str) {
    int sum = 0;
    stringstream ss(str);
    string temp;
    int number;
    
    while (!ss.eof()) {
        ss >> temp;
      
        if (stringstream(temp) >> number) {
            sum += number;
        }
 
        temp = "";
    }
    
    return sum;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int sum = sumOfNumbersInString(input);
    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}