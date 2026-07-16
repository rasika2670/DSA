class Solution {
public:
    int gcd(int a, int b){
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefixGcd(n);

        int mx = 0;

        for(int i=0 ; i<n ; i++)
        {
            mx = max( mx, nums[i] );
            prefixGcd[i] = gcd( mx, nums[i] );
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int left = 0, right = n-1;
        long long Sum = 0;

        while(left < right){
            Sum += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return Sum;        
    }
};