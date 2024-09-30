class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0;
        int size = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == 1) {
                int temp = 1;
                i = i+1;
                while (i < nums.size() && nums[i] == 1) {
                    temp++;
                    i++;
                }
                if (temp > size) {
                    size = temp;
                }
            }
            else {
                i++;
            }
        }
        return size;
    }
};