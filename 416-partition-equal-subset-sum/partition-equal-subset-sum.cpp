class Solution {
public:
    bool subset(int n, int sum, vector<int>& arr,vector<vector<int>> &dp)
    {
       if(n==0)
        {
            if(sum==0)
                return 1;
            return 0;
        }

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
            return dp[n][sum] =
                subset(n - 1, sum - arr[n - 1], arr,dp) + subset(n - 1, sum, arr,dp);
        else
            return dp[n][sum] =
                subset(n - 1, sum, arr,dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
        {
            sum+=i;
        }
        if(sum%2!=0)
        return false;
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
        return subset(n, sum/2, nums,dp);
    }
};