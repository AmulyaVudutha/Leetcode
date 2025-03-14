class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hm;
        vector <int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            if(hm.find(k)!=hm.end()){
                return {hm[k],i};
            }
            hm[nums[i]] = i; 
        }
         return {};
    }
};