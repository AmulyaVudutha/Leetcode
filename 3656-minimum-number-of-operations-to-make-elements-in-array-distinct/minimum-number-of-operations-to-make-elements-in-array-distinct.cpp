class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        //int n=nums.size();
        int operations = 0;
        while (true) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        bool hasDuplicates = false;
        for (const auto& [key, freq] : freq) {
            if (freq > 1) {
                hasDuplicates = true;
                break;
            }
        }
        if (!hasDuplicates) {
            break;
        }
        nums.erase(nums.begin(), nums.begin() + min(3, static_cast<int>(nums.size())));
        operations++;
        }
    return operations;
    }
};