//Problem:Majority Element
//Platform:Leetcode(169)
//difficulty:easy
//Language:c++
class Solution{
    public:
    int majorityElement(vector<int>&nums){
        int n=nums.size();
        int cnt=0;
        int i;
        int candidate;
        for(i=0;i<n;i++){
            if(cnt==0){
                candidate=nums[i];
            }
            if(candidate==nums[i]){
                cnt++;
            }
            else
            cnt--;
        }
        return candidate;
    }
};