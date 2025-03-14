class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        set <int> ans(nums.begin(),nums.end());
        vector <int> res;
        for(int i=1;i<=n;i++)
        {
            if(ans.find(i)==ans.end())
                res.push_back(i);
        }
        return res;
    }   
};