//Problem:Group Anagrams
//Platform:Leetcode
//difficulty:Medium
//Language:c++
class Solution{
    public:
    vector<vector<string>>groupAnagrams(vector<string>&strs){
        unordered_mao<string,vector<string>>mp;
        for(string s:strs){
            string original=s;
            sort(s.begin(),s.end());
            mp[s].push_back(original);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};