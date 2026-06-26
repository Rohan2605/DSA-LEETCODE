class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cntBits=0;
        for(int i=left; i<=right; i++){
            int cnt = __builtin_popcount(i);
            cout<<cnt;

            if (cnt <= 1) continue;
            bool prime = true;
            for (int j = 2; j * j <= cnt; j++) {
                if (cnt % j == 0) prime = false;
            }

            if(prime) cntBits++;
        }
        return cntBits;
    }
};