class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()>0 && s.find(part)<s.size()){
            int pos = s.find(part);
            s.erase(pos, part.size());
        }
        return s;
    }
};