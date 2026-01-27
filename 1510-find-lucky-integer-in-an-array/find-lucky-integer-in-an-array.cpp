class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> hm;
        for(int i=0;i<arr.size();i++)
        {
            hm[arr[i]]++;
        }
        int ans=-1;
        for(auto it:hm)
        {
            if(it.first==it.second)
            ans=max(ans,it.first);
        }
        return ans;
    }
};