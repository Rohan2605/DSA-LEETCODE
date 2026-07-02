class Solution {
private:
    int minElement(vector<int>& arr) {
        int minIndex = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[minIndex]) minIndex = i;
        }

        return minIndex;
    }

public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int min = minElement(nums);
            nums[min] *= multiplier;
        }

        return nums;
    }
};