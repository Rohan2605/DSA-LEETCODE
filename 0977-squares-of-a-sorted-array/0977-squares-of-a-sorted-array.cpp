class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // O(n) with output vector -------------------------

        // int n = nums.size();
        // int i=0, j=n-1, k=n-1;
        // vector<int> ans(n);

        // while(i<=j){
        //     if(abs(nums[i]) >= abs(nums[j])){
        //         ans[k] = nums[i]*nums[i];
        //         i++;
        //     }
        //     else{
        //       ans[k] = nums[j]*nums[j];
        //         j--;  
        //     }
        //     k--;
        // }
        // return ans;

        // O(nlogn) ---------------------------------

        for(int &x: nums){
            x *= x;
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};