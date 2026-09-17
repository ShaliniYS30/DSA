//Problem:Koko Eating Banana
//Platform:Leetcode
//Language:c++
//Difficulty:medium
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long totalHours = 0;

            for (int i = 0; i < piles.size(); i++) {
                totalHours += (piles[i] + mid - 1) / mid;
            }

            if (totalHours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {

    Solution obj;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int answer = obj.minEatingSpeed(piles, h);

    cout << "Minimum eating speed = " << answer << endl;

    return 0;
}