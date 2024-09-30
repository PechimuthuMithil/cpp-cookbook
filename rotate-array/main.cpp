class Solution {
public:
    void reverse(vector<int>& nums, int start, int end)
    {
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) {
            k = k%n;
        }
        // k = k % n; 
        if (k == 0) return; 
        // std::thread t1(&Solution::reverse, this, std::ref(nums), n - k, n - 1); 
        // std::thread t2(&Solution::reverse, this, std::ref(nums), 0, n - k - 1);
        // t1.join();
        // t2.join();
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-k-1);
        reverse(nums, 0, n-1);
        // reverse(nums, 0, n - 1); 
    }
};