class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hm;

        for (char c : magazine) {
            hm[c]++;
        }

        for (char c : ransomNote) {
            if (hm[c] <= 0) {
                return false;
            }
            hm[c]--;
        }
        return true;
    }
};