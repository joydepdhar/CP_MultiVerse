class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, product=1;
        while(n!=0){
            int digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n=n/10;
        }
        int ans=product-sum;
        return ans;
        
    }
};