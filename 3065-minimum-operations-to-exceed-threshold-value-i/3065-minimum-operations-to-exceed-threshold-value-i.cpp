class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int operations=0;

        for(int x: nums){
            if(x<k) operations++;
        }
        return operations;
    }
};