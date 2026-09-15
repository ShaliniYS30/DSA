//Problem:Square Root 
//Platform:Leetcode
//Language:c++
//Difficulty:easy
#include<iostream>
using namespace std;
int mySqrt(int x){
    int low=0;
    int high=x;
    int ans=0;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
};
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    cout<<"Square root = "<<mySqrt(x);
    return 0;
}

