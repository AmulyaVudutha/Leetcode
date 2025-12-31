class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();

       
        if (n1 != n2)
            return false;

        unordered_map<char, int> hm1;
        unordered_map<char, int> hm2;

       
        for (int i = 0; i < n1; i++) {
            hm1[word1[i]]++;
            hm2[word2[i]]++;
        }

       
        if (hm1.size() != hm2.size())
            return false;

        for (auto &p : hm1) {
            if (hm2.find(p.first) == hm2.end())
                return false;
        }

       
        vector<int> freq1, freq2;
        for (auto &p : hm1) freq1.push_back(p.second);
        for (auto &p : hm2) freq2.push_back(p.second);

       
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};
