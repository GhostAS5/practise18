#include <iostream>
#include <string>
using namespace std;

string numToEnString(int num);

int main() {

    int num;
    cin >> num;
    string englishWord = numToEnString(num);
    cout << englishWord;

    return 0;
}

string oneToNineteen(int num) {
    string words[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return words[num];
}

string twentyToNinety(int num) {
    string words[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return words[num / 10] + " " + oneToNineteen(num % 10);
}

string numToEnString(int num){
    if (num == 0){
        return "Zero";
    }

    string result;

    if (num >= 1000){
        result += numToEnString(num / 1000) + " Thousand ";
        num %= 1000;
    }

    if (num >= 100){
        result += oneToNineteen(num / 100) + " Hundred ";
        num %= 100;
    }

    if (num >= 20){
        result += twentyToNinety(num);
    } else if (num > 10){
        result += oneToNineteen(num);
    }

    return  result;
}