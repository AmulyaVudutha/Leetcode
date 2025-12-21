class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> hp;
        for(int i:nums)
        {
            hp[i]++;
        }
        int maxi=-1,ans=-1;
        for(auto x:hp)
        {
            if(x.first%2==0 && x.second>maxi)
            {
                ans=x.first;
                maxi=x.second;
            }
        }
        return ans;
    }
};