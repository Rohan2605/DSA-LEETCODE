class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> s;

        // for(int x: nums){
        //     s.insert(x);
        // }

        // int i = 0;
        // for(int x: s){
        //     nums[i] = x;
        //     i++;
        // }

        // return s.size();

        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i]= nums[j];
            }
        }
        return i+1;
    }
};