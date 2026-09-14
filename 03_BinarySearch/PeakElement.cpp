//Problem:Find peak element
//Platform:Leetcode
//difficulty:Easy
//language:c++
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int FindPeakElement(vector<int>&nums){
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};
int main(){
    vector<int> nums = {4,4, 5, 8,6, 7, 0, 1, 2};
    

    Solution obj;

    int ans = obj.FindPeakElement(nums);

    cout << ans;

    return 0;
}