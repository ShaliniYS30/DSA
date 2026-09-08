//Problem:UpperBound;
//Platform:Leetcode
//Difficulty:Easy
//Language:c++
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int>& nums, int target) {

        int n = nums.size();

        int low = 0;
        int high = n - 1;

        int ans = n;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {3, 4, 6, 7};
    int target = 4;

    Solution obj;

    int ans = obj.upperBound(nums, target);

    cout << ans;

    return 0;
}