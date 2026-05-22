class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;

        for(int x: nums){
            if(x!=0) v.push_back(x);
        }

        int rem = nums.size()-v.size();
        for(int i=0; i<rem; i++){
            v.push_back(0);
        }
        nums = v;
    }
};