//Problem:Binary Subarray with sum k
//Platform:Leetcode
//Difficulty:Medium
//Language:c++
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixsum=0;
        int count =0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-goal)!=mp.end()){
                count+=mp[prefixsum-goal];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};