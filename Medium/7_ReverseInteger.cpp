#include <climits>

class Solution {
public:
    int reverse(int x) {
        int reverse=0;
        while(x!=0){
            long long remainder=x%10;
            x/=10;
            if(reverse>INT_MAX/10 || (reverse==INT_MAX/10 && remainder >7)){
                return 0;
            }
            if(reverse<INT_MIN/10 || (reverse==INT_MIN/10 && remainder<-8)){
                return 0;
            }
            reverse=reverse*10+remainder;
        }
        return reverse;
    }
};
