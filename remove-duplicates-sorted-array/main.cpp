class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        int n = nums.size();
        vector<int> dist_nums;
        int num = nums[0];
        dist_nums.push_back(num);
        int k = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == num) {
                continue;
            }
            num = nums[i];
            dist_nums.push_back(num);
            k++;
        }
        nums = dist_nums;
        return k;
    }
};
