class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;   
        long long cnt=0;
        while(n){
            if(n&1) cnt++;
            n = n>>1;
        }
        return cnt!=1 ? false:true;
    }
};