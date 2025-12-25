class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<=n-1;i++)
        {
            pref[i]=(nums[i]*pref[i-1]);
                
        }
            
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=(nums[i]*suff[i+1]);
        }
        vector<int> res;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                ans=suff[i+1];
            else if(i==n-1)
                ans=pref[n-2];
            else
                ans=(pref[i-1]*suff[i+1]);
            res.push_back(ans);
        }
        return res;
    }
};