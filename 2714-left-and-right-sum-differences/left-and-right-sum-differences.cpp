class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<=n-1;i++)
        {
            pref[i]=(nums[i]+pref[i-1]);
                
        }    
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=(nums[i]+suff[i+1]);
        }
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            int diff=abs(pref[i]-suff[i]);
            res.push_back(diff);
        }
        return res;
    }
};