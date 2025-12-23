class Solution {
public:
    bool isPalindrome(string s) {
        string combined;
        for (char c : s) {
            if (isalnum(c)) {
                combined += tolower(c);
            }
        }

        int left = 0;
        int right = combined.size() - 1;

        while (left < right) {
            if (combined[left] != combined[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;        
    }
};