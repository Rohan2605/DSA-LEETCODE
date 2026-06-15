class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int start = 0 ,end = letters.size(), mid;
        // //changed end to letters.size() instead of letters.size()-1

        // while(start<end){
        //     mid = (start+end)/2;
        //     if(letters[mid] > target) end = mid;
        //     else start = mid + 1;
        // }
        // // return (letters[start] > target)?letters[start]: letters[0];

        // // or we can do the below return
        // return letters[start%letters.size()];

        auto it = upper_bound(letters.begin(), letters.end(), target);
        return (it == letters.end())? letters[0] : *it;
    }
};