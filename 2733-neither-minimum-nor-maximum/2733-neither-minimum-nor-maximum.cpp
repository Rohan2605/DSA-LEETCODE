class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        if(nums.size()<3) return -1;
        
        int ans = -1;
        int maxEl = nums[0]; 
        int minEl = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]<minEl){
                ans = minEl;
                minEl = nums[i];
            }
            else if(nums[i]>maxEl){
                ans = maxEl;
                maxEl = nums[i];
            }
            else return nums[i];
        }

        return ans;
    }
};