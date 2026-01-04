class Solution {
public:
    int count(int n)
    {
        int rem,cnt=0;
        while(n>0)
        {
            rem=n%10;
            cnt++;
            n=n/10;
        }
        return cnt;
    }


    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int res=count(nums[i]);
            if(res%2==0)
            ans++;
        }
        return ans;
    }
};