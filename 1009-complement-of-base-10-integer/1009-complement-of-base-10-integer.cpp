class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int musk=0;
        if(n==0){
            return 1;
        }
        while(m!=0){
            musk=(musk<<1)|1;
            m=m>>1;
        }
        int answer=musk & (~n);
        return answer;
    }
};