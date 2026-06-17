class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // O(n) with no extra space  ---------------------------

        // int n = nums.size();
        // int i=0;

        // for(int j=0; j<n; j++){
        //     if(nums[j]!=0){
        //         swap(nums[i], nums[j]);
        //         i++;
        //     }
        // }


        // O(n) ----------------------------------

        vector<int> ans;

        for(int x: nums){
            if(x!=0) ans.push_back(x);
        }
        for(int x: nums){
            if(x==0) ans.push_back(x);
        }

        nums = ans;
    }
};