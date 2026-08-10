//Problem:Prime Number check
//Platform:Greeks for Greeks
//Difficulty:easy
//Language:C++
class Solution{
    static boolean isPrime(int n){
        int count =0;
        if(n<=0){
            return false;
        }
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else{
        return false;
        }
    }
}
