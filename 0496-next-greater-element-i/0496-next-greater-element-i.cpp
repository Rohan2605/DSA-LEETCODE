class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;
        stack<int> st;

        for(int i: nums2){
            while(!st.empty() && st.top()<i){
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            nge[st.top()]=-1;
            st.pop();
        }

        for(int &x: nums1){
            x = nge[x];
        }
        return nums1;
    }
};