class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int cnt=0;

        for(int x: nums){
            if(x == 1) cnt++;
            else cnt = 0;
            
            ans = max(cnt, ans);
        }
        return ans;
    }
};