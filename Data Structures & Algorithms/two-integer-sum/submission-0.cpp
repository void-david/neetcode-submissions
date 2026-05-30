class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store {number, index}
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];

            // If we found the complement in our map, we have our two numbers!
            if (mp.find(comp) != mp.end()) {
                return {mp[comp], i}; 
            }

            // Otherwise, store the current number and its index in the map
            mp[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (LeetCode guarantees one, though)
        return {};
    }
};