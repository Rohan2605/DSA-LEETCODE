class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak;
        int n = nums.size();
        int i = 0, j = n - 1;

        if(n==1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        while (i < j) {
            int mid = i + (j - i) / 2;

            if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid]) {
                peak = mid;
                return mid;
            } else if (nums[mid] < nums[mid + 1])
                i = mid + 1;
            else
                j = mid;
        }
        return peak;
    }
};