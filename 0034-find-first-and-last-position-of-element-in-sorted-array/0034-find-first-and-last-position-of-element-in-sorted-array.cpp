class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=-1, end=-1;
        
        int left=0, right=nums.size()-1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid]>=target){
                if (nums[mid] == target) st = mid;
                right = mid - 1;
            }
            else left = mid + 1;      
        }

        left=0, right=nums.size()-1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid]<=target){
                if (nums[mid] == target){
                    end = mid;
                }
                left = mid + 1;
            }
            else right = mid - 1;
                
        }
        
        return {st, end};

    }
};