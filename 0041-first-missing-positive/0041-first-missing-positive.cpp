class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int pos = 1;

        for(int i=0 ; i<n ; i++){
            if(nums[i] <= 0){
                continue;
            }
            if(pos < nums[i]){
                return pos;
            }
            if(pos == nums[i]){
                pos++;
            } 
        }
        return pos;
    }
};