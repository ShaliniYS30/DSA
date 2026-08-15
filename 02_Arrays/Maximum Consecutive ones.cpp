//Problem:Maximum Consecutive ones
//Platform:Leetcode(485)
//difficulty:easy
//Language:c++
class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int> &nums){
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                cnt++;
                maxi++;
                maxi=max(cnt,maxi);
            }
            else{
                cnt=0;
            }
        }
        return maxi;
    }
}