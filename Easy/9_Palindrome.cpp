class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false; // for negative number
        }
        long long reverse=0;
        int original=x;  //because x is being changed in the while loop
        while(x!=0){
            int remainder=x%10;
            reverse=reverse*10 + remainder;
            x/=10;
        }
        if(original==reverse){
            return true;
        }
        return false;
    }
};