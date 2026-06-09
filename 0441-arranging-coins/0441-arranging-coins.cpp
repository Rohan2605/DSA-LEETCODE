class Solution {
public:
    int arrangeCoins(int n) {
        long long cnt=0;
        long long i = 1;

        while(n>0){
            if(n>=i){
                n -= i;
                cnt++;
            }
            else return cnt;
            i++;
        }
        return cnt;
    }
};