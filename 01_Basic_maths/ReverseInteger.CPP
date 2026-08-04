//Problem:Reverse Integer
//Platform:leetcode
//Difficulty:Medium
//Language:C++
#include<iostream.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revno=0;
    while(n!=0){
        int lastDigit=n%10;
        n=n/10;
        revn0=revno*10+lastDigit;
    }
    cout<<revno;
    return 0;
}