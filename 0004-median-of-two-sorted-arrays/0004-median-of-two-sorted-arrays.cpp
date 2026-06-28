class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> mergeA(n+m);
        int k = 0;
        int i=0, j=0;

        while(i<n && j<m){
            if(nums1[i]<nums2[j]) mergeA[k++] = nums1[i++];
            else mergeA[k++] = nums2[j++];
        }

        while(i<n){
            mergeA[k++] = nums1[i++];
        }

        while(j<m){
            mergeA[k++] = nums2[j++];
        }
        
        double ans;
        if((n+m) % 2 == 0){
            ans = (mergeA[(n+m)/2] + mergeA[((n+m)/2)-1])/2.0;
            return ans;
        }
        ans = (mergeA[(n+m)/2])/1.0;
        return ans;
    }
};