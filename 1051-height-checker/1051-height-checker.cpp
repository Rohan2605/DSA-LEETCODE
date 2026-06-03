class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101);
        
        for(int x: heights){
            freq[x]++;
        }

        int cnt = 0, j=0;

        for(int i=0; i<101; i++){
            while(freq[i]>0){
                if(heights[j] != i) cnt++;
                freq[i]--;
                j++;
            }
        }
        
        return cnt;
    }
};