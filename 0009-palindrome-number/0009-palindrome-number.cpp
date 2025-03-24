class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long int res = 0;
        int y;
        if(a<0) return false;
        while(a>0)
        {
            y=a%10;
            res = res*10 +y;
            a = a/10;
        } 
        return x==res;
    }
};