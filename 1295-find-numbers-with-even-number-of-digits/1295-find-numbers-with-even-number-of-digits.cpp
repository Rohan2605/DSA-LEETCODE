class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int x: nums){
            int cnt = 0;
            while(x>0){
                cnt++;
                x = x/10;
            }
            if(cnt%2==0) ans += 1;
        }
        return ans;
    }
};