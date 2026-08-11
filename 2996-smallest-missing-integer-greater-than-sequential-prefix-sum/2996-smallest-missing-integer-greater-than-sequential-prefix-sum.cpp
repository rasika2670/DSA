class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int preSum = nums[0];
        
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i] != nums[i-1]+1){
                break;
            }

            preSum += nums[i];
        }

        unordered_set<int> st(nums.begin(), nums.end());

        while(st.count(preSum)){
            preSum++;
        }

        return preSum;

    }
};