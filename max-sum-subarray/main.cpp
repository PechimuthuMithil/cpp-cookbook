class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        long long max = LONG_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > max) {
                max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
};