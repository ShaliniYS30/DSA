//Problem:Remove_Duplicate_From_Sorted_Array
//Platform:Leetcode(26)
//Difficulty:Easy
//Language:c++;
class Solution{
    public:
    int removeDuplicate(vector<int>&nums){
        int count=1;
        unordered_set<int>st;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[count-1]){
                st.insert(nums[i]);
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};