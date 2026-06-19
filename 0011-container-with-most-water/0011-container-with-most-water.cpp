class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int left_bar = 0, right_bar = n-1;
        int maxStorage = INT_MIN;

        while(left_bar < right_bar){
            int currStorage = min(height[left_bar], height[right_bar]) * (right_bar - left_bar);
            maxStorage = max(maxStorage, currStorage);
            
            if(height[left_bar] < height[right_bar]) left_bar++;
            else if(height[left_bar] >= height[right_bar]) right_bar--;
        }
        return maxStorage;
    }
};