class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101);
        
        for(int x: heights){
            freq[x]++;
        }

        vector<int> expectedH;

        for(int i=0; i<101; i++){
            while(freq[i]>0){
                expectedH.push_back(i);
                freq[i]--;
            }
        }

        int cnt = 0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i] != expectedH[i]) cnt++;
        }
        return cnt;
    }
};