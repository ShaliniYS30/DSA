//Problem:Longest Common Prefix
//Platform:Leetcode
//difficulty:Easy
//language:C++
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int minLength = strs[0].length();
        for(auto p:strs){

        int minLenght=min(minLenght,int(p.length()));
        }
        for(int i = 0; i < minLength; i++) {
    for(int j = 1; j < strs.size(); j++) {
        if(strs[j][i] != strs[0][i]) {
            return ans;
        }
    }
    ans += strs[0][i];
        }
        return ans;
}
    
};
