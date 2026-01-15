class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } 
            else {
                reverse(temp.begin(), temp.end());
                if (!temp.empty()) {
                    res += temp + " ";
                }
                temp = "";
            }
        }

        reverse(temp.begin(), temp.end());
        if (!temp.empty()) {
            res += temp;
        }

        
        if (!res.empty() && res.back() == ' ')
            res.pop_back();

        return res;
    }
};
