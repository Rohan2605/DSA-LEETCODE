class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size()-1;

        // while(left<right){
        //     if((nums[left]+nums[right]) == target) {
        //         return {left, right};
        //     }
        //     if(nums[left]+nums[right]>target) right--;
        //     else left++;
        // }
        // return {-1,-1};

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};