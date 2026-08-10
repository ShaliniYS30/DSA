//Problem:Armstrong Numbers
//Platform:Greeks for Greeks
//Difficulty:easy
//Language:C++
class Solution{
    static boolean
    armstrongNumber(int n){
        int dupN=n;
        int sum=0;
        while(n>0){
            int last=n%10;
            sum+=last*last*last;
            n/=10;
        }
        if(sum==dupN){
            return True;
        }
        else{
            return false;
        }
    }

}