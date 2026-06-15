class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0 ,end = letters.size()-1, mid;

        while(start<end){
            mid = (start+end)/2;
            if(letters[mid]-'a' > target - 'a') end = mid;
            else start = mid + 1;
        }
        return (letters[start]-'a' > target - 'a')?letters[start]: letters[0];
    }
};