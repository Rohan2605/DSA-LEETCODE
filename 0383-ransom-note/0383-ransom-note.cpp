class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;

        for(char c: ransomNote){
            mp[c]++;
        }

        for(int i=0; i<magazine.size(); i++){
            if(mp[magazine[i]]>0) mp[magazine[i]]--;
        }

        for(auto x: mp){
            if(x.second != 0) return false;
        }
        return true;
    }
};