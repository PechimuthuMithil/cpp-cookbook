class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Idea: In first pass put all 2's at the end, then put all the 1's.

        int i = -1;
        int j = -1;
        int n = nums.size();

        for (int k = 0; k < n; k++) {
            if (nums[k] == 2) {
                i = k;
                j = k+1;
                break;
            }
        }

        if (i != -1) {
            while (j < n && i <= j) {
                if (nums[j] == 2) {
                    j++;
                }
                else if (nums[j] != 2) {
                    nums[i] = nums[j];
                    nums[j] = 2;
                    i++;
                    j++;
                }
            }
        } else {
            i = n;
        }
        
        int i_ = -1, j_ = -1;
        for (int k = 0; k < i; k++) {
            if (nums[k] == 1) {
                i_ = k;
                j_ = k+1;
                break;
            }
        }
        if (i_ == -1) {
            return;
        }
        while (j_ < i && i_ <= j_) {
            if (nums[j_] == 1) {
                j_++;
            }
            else if (nums[j_] != 1) {
                nums[i_] = nums[j_];
                nums[j_] = 1;
                i_++;
                j_++;
            }
        }
        
        // cout << i << j << "\n";
        // for (int k = 0; k < n; k++) {
        //     cout << nums[k];
        // }
        // int i_, j_;
        // for (int k = 0; k < i; k++) {
        //     if (nums[k] == 1) {
        //         i_ = k;
        //         j_ = k+1;
        //         break;
        //     }
        // }
        // while (j_ < i && i_ <= j_) {
        //     if (nums[j_] == 1) {
        //         j_++;
        //     }
        //     else if (nums[j_] != 1) {
        //         nums[i_] = nums[j_];
        //         nums[j_] = 1;
        //         i_++;
        //         j_++;
        //     }
        // }
        // cout << "\n" << i_ << j_ << "\n";
        // for (int k = 0; k < n; k++) {
        //     cout << nums[k];
        // }
    }
};