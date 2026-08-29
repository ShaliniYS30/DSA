//Problem:Sort array by parity
//Platform:Leetcode(905)
//Difficulty:Easy
//Language:c++
class Solution{
    public:
    vector<int> sortByparity(vector<int>&nums){
        int n=nums.size();
        vector<int> ans(n,0);
        int left=0;
        int right=n-1;
        while(left<=right){
            for(int i=0;i<n;i++){
                if(nums[i]%2==0){
                    ans[left]=nums[i];
                    left++;
                }
                else{
                    ans[right]=nums[i];
                    left--;
                }
            }
        }
        return ans;
    }
};