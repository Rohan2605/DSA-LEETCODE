class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=-1, end=-1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target && (st==-1 && end==-1) ){
                st = i;
                end = i;
            } 
            else if(nums[i]==target) end = i;
        }
        return {st, end};
    }
};