class Solution {
public:
    string truncateSentence(string s, int k) {
        int j = 0;
        while (j < s.size()) {
            while (j < s.size() && s[j] != ' ') {
                j++;
                cout << j << endl;
            }
            k--;
            cout << "k " << k << endl;
            if (k == 0)
                break;

            j++;
        }
        return s.substr(0, j);
}
};