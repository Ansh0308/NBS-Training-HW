#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>

using namespace std;
typedef vector<string> viS;
typedef vector<int> vi;
typedef map<string,viS> msvs;
#define forn(i,n) for(int i=0;i<n;i++)


using namespace std;


string twoDigitToWord(int num, map<int, string>& numberToWord) {
    if (num < 20) {
        return numberToWord[num];
    } else {
        int tens = num / 10 * 10;
        int ones = num % 10;
        if (ones == 0) {
            return numberToWord[tens];
        } else {
            return numberToWord[tens] + "-" + numberToWord[ones];
        }
    }
}


string numberToWords(int num, map<int, string>& numberToWord) {
    numberToWord[0] = "zero";
    numberToWord[1] = "one";
    numberToWord[2] = "two";
    numberToWord[3] = "three";
    numberToWord[4] = "four";
    numberToWord[5] = "five";
    numberToWord[6] = "six";
    numberToWord[7] = "seven";
    numberToWord[8] = "eight";
    numberToWord[9] = "nine";
    numberToWord[10] = "ten";
    numberToWord[11] = "eleven";
    numberToWord[12] = "twelve";
    numberToWord[13] = "thirteen";
    numberToWord[14] = "fourteen";
    numberToWord[15] = "fifteen";
    numberToWord[16] = "sixteen";
    numberToWord[17] = "seventeen";
    numberToWord[18] = "eighteen";
    numberToWord[19] = "nineteen";
    numberToWord[20] = "twenty";
    numberToWord[30] = "thirty";
    numberToWord[40] = "forty";
    numberToWord[50] = "fifty";
    numberToWord[60] = "sixty";
    numberToWord[70] = "seventy";
    numberToWord[80] = "eighty";
    numberToWord[90] = "ninety";
    if (num == 0) return numberToWord[0];

    string result = "";

    if (num >= 1000000) {
        result += numberToWords(num / 1000000, numberToWord) + " million ";
        num %= 1000000;
    }

    if (num >= 1000) {
        result += numberToWords(num / 1000, numberToWord) + " thousand ";
        num %= 1000;
    }

    if (num >= 100) {
        result += numberToWords(num / 100, numberToWord) + " hundred ";
        num %= 100;
    }

    if (num > 0) {
        result += twoDigitToWord(num, numberToWord);
    }

    return result;
}


void playing_map(){
    map<int, string> numberToWord;
    int num;
    cout << "Enter a number between 0 and 10000000: ";
    cin >> num;
    if (num >= 0 && num <= 10000000) {
        cout << "The number " << num << " is written as: " << numberToWords(num, numberToWord) << endl;
    } else {
        cout << "Please enter a valid number between 0 and 10000000." << endl;
    }





}


int main(){
    playing_map();




return 0;
}

