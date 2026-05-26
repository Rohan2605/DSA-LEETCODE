class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int start = nums[i];
            int end = nums[i];
            int j = i+1;

            while(j<n && nums[j] == nums[j-1]+1){
                end = nums[j];
                j++;
            }

            string str;

            if(start!=end){
                str = to_string(start) + "->" + to_string(end);
            }
            else{
                str = to_string(start);
            } 

            ans.push_back(str);
            i = j-1;
        }
        return ans;
    }
};