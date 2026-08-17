//Problem:Two Sum with target k
//Language:c++
//optimal Solution
class Solution{
    public:
    int Twosum(vector<int> &nums,int k){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int right=n-1;
        int target=0;
        while(left<right){
          target=nums[left]+nums[right];
          if(target==k){
            return{left,right}
          }
          else if(target<k){
            right++;
          }
          else{
            left++;
          }
        }

    }
}