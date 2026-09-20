/Problem:M_Bouquets
//Platform:Leetcode
//Difficulty:Medium
//Langugue:C++
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        if(bloomDay.size() < (long long)m * k)
{
    return -1;
}
        while(low<=high){
            int mid=low+(high-low)/2;
            int bouquets=0;
            int count=0;
            for(int Day : bloomDay)
{
    if(Day <= mid)
    {
        count++;

        if(count == k)
        {
            bouquets++;
            count = 0;
        }
    }
    else
    {
        count = 0;
    }
}
if(bouquets>=m){
    high=mid-1;
}
else{
    low=mid+1;
}
        }
        return low;
    }
};