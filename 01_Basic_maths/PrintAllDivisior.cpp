//Problem:Print all Divisior
//Platform:Greeks for Greeks
//Difficulty:easy
//Language:C++
class Solution{
    public:
    vector<int> getDivisors(int n){
        vector<int> ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans.push_back(i);
            }
            if(n/i!=i){
                ans.push_back(n/i);
            }
        }
    }
}