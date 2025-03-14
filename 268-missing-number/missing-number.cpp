class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int mis_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mis_sum+=nums[i];
        }
        int ans=sum-mis_sum;
        return ans;
    }
};