//Problem:Reverse Vowels of String
//Platform:Leetcode
//Difficulty:Easy
//Language:C++

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

int main() {
    string s = "hello";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!isVowel(s[left])) {
            left++;
        }
        else if (!isVowel(s[right])) {
            right--;
        }
        else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    cout << s << endl;

    return 0;
}
