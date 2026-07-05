class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minTime = INT_MAX;
        for(const vector<int> &x: tasks){
            minTime = min( minTime, x[0] + x[1]);
        }
        return minTime;
    }
};