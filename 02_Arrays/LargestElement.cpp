//Problem=Third Largest element
//Platform:leetcode
//Difficulty:Easy
//Language:C++
class solution{
     int thirdMax(vector<int>& nums){
        long long first==LLONG_MIN;
        long long second==LLONG_MIN;
        long long Third==LLONG_MIN;
        for(int i=0;i<nums.size();i++){
if(nums[i]==first||nums[i]==second||nums[i]==Third)
    continue;
    if(nums[i]>first){
        Third=second;
        second=first;
        first=nums[i];
         }
         else if(nums[i]>second){
            Third=second;
            second=nums[i];
         }
         else if(nums[i]>Third){
            Third=nums[i];
         }
     } 
     return Third==LLONG_MIN?first:Third;
    }
};
