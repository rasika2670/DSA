class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> hash;

        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        int rank = 1;
        for (int x : sortedArr) {
            // Only insert if key doesn't exist (handles duplicates)
            if (hash.find(x) == hash.end()) {
                hash[x] = rank++;
            }
        }

        vector<int> ans;
        ans.reserve(arr.size()); // Optional: optimization
        for (int x : arr) {
            ans.push_back(hash[x]); // Use push_back instead of ans[i]
        }

        return ans;
    }
};