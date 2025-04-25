class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set <int> Set(nums.begin(),nums.end());
        if(Set.size()!=n)
            return true;
        else
            return false;
    }
};