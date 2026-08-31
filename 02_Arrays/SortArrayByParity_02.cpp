//Problem:Sort Array By parity 02
//Platform:Leetcode
//Difficulty:Easy
//Language:c++
class Solution{
    public:
    vector<int> sortArrayByParityII(vector<int>){
        int n=nums.size();
        int left=0;
        int right=1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[left]=nums[i];
                ans[left+=2];

            }
            else{
                ans[right]=nums[i];
                ans[right+=2];
            }
        }
        return ans;
    }
};