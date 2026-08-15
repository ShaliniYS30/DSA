#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int> & arr,int k){
    unordered <int int> mpp;
    int prefixsum=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        if(prefixsum==k){
            maxlen=i+1;
        }
        if(mpp.find(prefix-k)!=mpp.end()){
            maxlen=max(maxlen,i-mpp[prefixsum-k]);
        }
        if(mpp.find(prefixsum)==mp.end()){
            mp[prefixsum]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int> arr={1,2,3,1,1,1,1,1};
    int k=6;
    cout<<longestsubarray(arr,k);
    return 0;
}