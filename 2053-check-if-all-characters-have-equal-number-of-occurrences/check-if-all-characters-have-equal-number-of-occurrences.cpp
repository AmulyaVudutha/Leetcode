class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> hm;
        for(char ch:s)
        {
            hm[ch]++;
        }
        auto it=hm.begin();
        int cnt=it->second;
        for(auto p :hm)
        {
            if(p.second!=cnt)
                return false;
        }
        return true;
    }
};