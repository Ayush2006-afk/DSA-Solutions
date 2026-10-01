class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,diff=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            product*=digit;
            n/=10;
            diff=product-sum;

        }
        
        return diff;
    }
};
