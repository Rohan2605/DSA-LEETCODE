class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int low = 0 ,high = n-1, mid;

        // while(low<=high){
        //     mid = (high+low)/2;
        //     if(letters[mid] = target - 'a') 
        // }

        vector<int> freq(26);
        for(char x: letters){
            int temp = x - 'a';
            freq[temp]++;
        }

        int num = target - 'a';

        for(int i=num+1; i<26; i++){
            if(freq[i]>0) return 'a'+ i;
        }

        return letters[0];
    
    }
};