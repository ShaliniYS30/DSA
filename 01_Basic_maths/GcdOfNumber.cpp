//Problem:GCD_of_two_numbers.cpp
//Topic:Basic Maths/Euclidean Algorithm
//Time:0(log(min(a,b)))
//space:0(1)
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout>>n1;
    return 0;
}