#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

string findWordWithMostRepeatedLetters(const string& input) {
    stringstream ss(input);
    string word;
    map<string, int> wordMap;

    while (ss >> word) {
        map<char, int> charMap;
        for (char c : word) {
            charMap[c]++;
        }

        int maxCount = 0;
        for (auto& pair : charMap) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
            }
        }

        wordMap[word] = maxCount;
    }

    int maxRepeatedLetters = 0;
    string resultWord;

    for (auto& pair : wordMap) {
        if (pair.second > maxRepeatedLetters) {
            maxRepeatedLetters = pair.second;
            resultWord = pair.first;
        }
    }

    return resultWord;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string result = findWordWithMostRepeatedLetters(input);

    cout << "Word which has the highest number of repeated letters: " << result << endl;

    return 0;
}