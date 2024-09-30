class Solution {
public:
    bool check(vector<int>& nums) {
        int min_index = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] <= nums[min_index] && nums[i] < nums[(i+nums.size()-1)%nums.size()]){
                min_index = i;
            }
        }
        int prev_index;
        int next_index;
        for (int i = 1; i < nums.size(); i++){
            prev_index = (min_index + i-1)%nums.size();
            next_index = (min_index + i)%nums.size();
            if (nums[next_index] < nums[prev_index]) {
                return false;
            }
        }
        return true;
    }
};