//Problem:Binary Search
//Platform:Leetcode
//Difficulty:Easy
//Language:C++
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return -1;
    }
};
    int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 7;

    Solution obj;

    cout << obj.search(nums, target);

    return 0;
}

