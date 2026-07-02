class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int x: nums){
            while(x){
                int dig = x%10;
                if(dig == digit) cnt++;
                x = x/10;
            }
        }
        return cnt;
    }
};