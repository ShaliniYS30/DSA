//Problem:4sums
//PLatform:Leetcode
//difficulty:MEDIUM
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        sort (nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i > 0 && nums[i] == nums[i-1])
            continue;
            for(int j=i+1;j<n-1;j++){
if(j>i+1&&nums[j]==nums[j-1])
    continue;
            int right=n-1;
            int left=j+1;
            while(left<right){
            
            long long sum=(long long)nums[i]+nums[j]+nums[right]+nums[left];
            if(sum==target){
                ans.push_back({nums[i],nums[j],nums[left],nums[right]});

left++;
                right--;


            
             while(left<right &&nums[left]==nums[left-1]){
                left++;
                }
                while(left<right &&nums[right]==nums[right+1]){
                    right--;
                }
            }
            else if (sum>target){
                right--;
            }
            else{
            left++;
            }
        }
        }
            }
        return ans;

    }
};
int main() {

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    Solution obj;

    vector<vector<int>> result = obj.fourSum(nums, target);

    for(auto &quad : result) {
        for(int x : quad) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}