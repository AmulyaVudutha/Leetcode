class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
        int sum=0,cnt=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int to_find = sum - k;
            if(mp.find(to_find) != mp.end()){
                cnt += mp[to_find];
            }
            mp[sum]++;
        }
        return cnt;
    }
};