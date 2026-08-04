class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> missing;
        int curr = nums[0];

        for (int i = 1; i < n; i++) {
            while (nums[i] - curr != 1) {
                missing.push_back(curr + 1);
                curr++;
            }
            curr = nums[i];
        }

        return missing;
    }
};