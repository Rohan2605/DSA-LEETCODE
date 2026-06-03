class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expectedH = heights;

        sort(expectedH.begin(), expectedH.end());

        int cnt = 0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expectedH[i]) cnt++;
        }
        return cnt;
    }
};