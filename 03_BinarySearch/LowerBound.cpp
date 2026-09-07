//Problem:LowerBound(search insert position);
//Platform:Leetcode
//Difficulty:Easy
//Language:c++
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        
        }

    return ans;
    }
    
};
int main(){
    vector<int> nums={3,4,6,7};
    int target=4;
    
    Solution obj;
int ans = obj.searchInsert(nums, target);
    cout<<ans;
}