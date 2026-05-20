class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        int mid=0;
        if(target>nums[high]) return high+1;

        while(low<=high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) high = mid-1;
            else low = mid +1;
        }
        return low;
    }

    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size()-1;
        return binarySearch(nums, 0, n, target);
    }
};