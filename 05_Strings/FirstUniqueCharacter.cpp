#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int firstUniqueChar(string s){
        int freq[20]={0};
for(char c:s){
    freq[c-'a']++;

}
 for(int i=0;i<s.size();i++){
     if(freq[s[i]-'a']==1){
        return i;
     }
 }
 return -1;
    }
};
int main(){
    Solution obj;
    string s="loveleetcode";
    cout<<obj.firstUniqueChar(s);
    return 0;
}