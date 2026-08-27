//Problem:Rearrange Array Elements By Signs
//Platform:leetcode(2149)
//difficulty:medium
//language:c++
class Solution{
    public:
    int rearrangeElements(vetor<int>&nums){
        int n=nums.size();
        vector<int> ans(n,0);
        int positive=0;
        int negative=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative+=2;
            }
            else
            ans[positive]=nums[i];
            positive+=2;
        }
        return ans;
    }
};