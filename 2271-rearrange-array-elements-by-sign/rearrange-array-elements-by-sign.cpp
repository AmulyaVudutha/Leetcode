class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);
        }
        int i=0,j=0;
        while(j<n/2)
        {
            res.push_back(pos[i]);
            i++;
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};