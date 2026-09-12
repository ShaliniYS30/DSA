//Problem:Minimum in Rotated Sorted Array
//Platform:Leetcode
//Difficulty:Medium
//Language:C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[high]){
                return nums[low];
    
            }
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                high=mid-1;
}
            else{
                ans=min(ans,nums[mid]);
                low=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> nums = {4,4, 5, 8,6, 7, 0, 1, 2};
    

    Solution obj;

    int ans = obj.findMin(nums);

    cout << ans;

    return 0;
}
