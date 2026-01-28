class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       map<int,int> hm;
       for(int i=0;i<nums.size();i++)
       {
            hm[nums[i]]++;
       }
       int sum=0;
       for(auto it :hm)
       {
            if(it.second==1)
            sum+=it.first;
       }
       return sum;
    }
};