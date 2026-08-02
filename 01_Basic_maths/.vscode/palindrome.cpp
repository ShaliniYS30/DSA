//Problem:Palindrome Number
//Platform:leetcode
//Difficulty:Easy
//Language:C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
    
      int  dup =x; 
       int revno=0;
       while(x>0){
      int lastdigit =x%10;
        revno=revno*10+lastdigit;
        x=x/10;}
        if(dup==revno){
            return true;
        }else
        return false;
        }
        };
        int main (){
            Solution obj;
            int x;
            cin>>x;
           cout<<obj.ispalindrome(x);
           return 0;
        }