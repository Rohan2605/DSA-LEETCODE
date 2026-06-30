class Solution {
public:
    int mirrorDistance(int n) {
        int m = 0;
        int x = n;

        while(n){
            int digit = n % 10;
            m  = m*10 + digit;
            n /= 10;
        }

        return abs(m-x);
    }
};