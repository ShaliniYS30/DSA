//Problem: first and last occurence in sorted Array
//Platform:Leetcode
//Difficulty:Medium
//Language:c++
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (first == n || nums[first] != target) {
            return {-1, -1};
        }

        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        return {first, last};
    }
};
int main() {

    vector<int> nums = {3, 4, 6, 7};
    int target = 4;

    Solution obj;

    vector<int> ans = obj.searchRange(nums, target);

     cout << ans[0] << " " << ans[1];


    return 0;
}