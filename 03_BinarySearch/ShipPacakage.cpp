//Problem:capacity of ship package within Days
//Platform:Leetcode
//Difficulty:Medium
//Langugue:C++
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int daysneeded=1;
            int currentweights=0;
            for(int weight:weights){
                int newweight=currentweights+weight;
                if(newweight>mid){
                    daysneeded++;
                    currentweights=weight;
                }
                else{
                    currentweights+=weight;
                }
            }
            if(daysneeded>days){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};