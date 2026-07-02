class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxW = 0;
        
        sort(points.begin(), points.end());

        for(int i=0; i<points.size()-1; i++){
            int tempM = points[i+1][0] - points[i][0];
            maxW = max(tempM, maxW);
        }

        return maxW;
    }
};