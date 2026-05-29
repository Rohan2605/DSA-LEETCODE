class Solution {
public:
    int reverseBits(int n) {
        int res;
        for(int i=1; i<=32; i++){
            int bit = n&1; // get the last bit of the no
            res <<= 1; // left shift result by one place (making room in result for next bit)
            res = res | bit; // res or bit adds the bit to the result (0 for 0, 1 for 1)
            n >>= 1; // right shift no by one place
        }
        return res;
    }
};