class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> mergeA(n+m);
        int k = 0;
        
        for(int i=0; i<n; i++){
            mergeA[k++] = nums1[i];
        }
        for(int i=0; i<m; i++){
            mergeA[k++] = nums2[i];
        }

        sort(mergeA.begin(), mergeA.end());

        double ans;
        if((n+m) % 2 == 0){
            ans = (mergeA[(n+m)/2] + mergeA[((n+m)/2)-1])/2.0;
            return ans;
        }
        ans = (mergeA[(n+m)/2])/1.0;
        return ans;
    }
};