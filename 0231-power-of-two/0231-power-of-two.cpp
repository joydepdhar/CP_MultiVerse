class Solution {
public:
    bool isPowerOfTwo(int n) {
        int answer=0;
        for(int i=0;i<31;i++){
            int j=pow(2,i);
            if(j==n){
                return true;
            }
        }
        return false;
    }
};