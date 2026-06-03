class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        int ans = 0;
        while(pq.size()>0){
            ans += pq.top();
            pq.pop();
            pq.pop();
        }
        return ans;
    }
};