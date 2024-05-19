#include <iostream> // Including input/output stream library
#include <string> // Including string handling library

using namespace std; // Using the standard namespace

// Function to count occurrences of two different characters in a string and check if their counts are equal
string count_chars(string str) {

	int kolvo = 0; // Initializing counters for chr1 and chr2 occurrences

	// Loop through the string to count occurrences of chr1 and chr2
	for (int x = 0; x < str.length(); x++) {
        for ( int j = x+1; j < str.length(); j++){
            if (str[x] == str[j]) return "True";
        }
    }
    return "False"; 
}

// Main function
int main() {
	string str;
    cout << "Enter a string: ";
    cin>> str;
    cout << count_chars(str);
}