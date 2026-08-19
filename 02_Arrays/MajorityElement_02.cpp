//Problem:MajorityElement_02
//Platform:Leetcode
//difficulty:Medium
//Language:c++
class Solution{
    public:
    vector<int> majorityElement(vector<int>&nums){
        int candidate1=0;
        int candidate2=0;
        int count1=0;
        int count2=0;
        for(int num:nums){
        if(num==candidate1){
            count1++;

        }
        else if(num==candidate2){
            count2++;
        }
        else if(count1==0){
            num=candidate1;
            count1=1;
        }
        else if(count2==0){
            num=candidate2;
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
        }
        for(int num:nums){
            if(num==candidate1){
                count1++;
            }
            else if(num==candidate2){
                count2++;
            }
        }
        vector<int> ans;
        if(count1>nums.size()/3)
        ans.push_back(candidate1);
        if(count2>nums.size()/3)
        ans.push_back(candidate2);

    }
};