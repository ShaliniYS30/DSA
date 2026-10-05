//Problem: Reverse String
//Platform: Leetcode
//Difficulty: Easy
//Language: C++

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }

        return;
    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    Solution obj;
    obj.reverseString(s);

    for (char ch : s) {
        cout << ch;
    }

    return 0;
}