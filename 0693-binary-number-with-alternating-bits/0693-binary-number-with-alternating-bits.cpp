class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool bit = n&1;
        while(n){
            n = n>>1;

            bool currBit = n&1;
            if(currBit == bit) return false;

            bit = currBit;
        }

        return true;
    }
};