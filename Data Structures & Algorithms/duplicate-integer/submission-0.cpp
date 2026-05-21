class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        int n = arr.size();
        // Hash map which will store the
        // elements which has appeared previously.
        unordered_map<int, bool> mp;

        for (int i = 0; i < n; ++i) {

            // Print the element if it is not
            // there in the hash map
            if (mp.find(arr[i]) != mp.end()) {
                return true;
            }

            // Insert the element in the hash map
            mp[arr[i]] = true;
        }
        return false;
    }
};