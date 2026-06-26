class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int arrX = 0;
        for(int x: nums){
            arrX ^= x;
        }

        if(arrX != 0){
            return nums.size();
        }
        else{
            for(int x: nums){
                if(x>0) return nums.size()-1;
            }
        }
        return 0;
    }
};