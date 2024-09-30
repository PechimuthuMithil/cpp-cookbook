class Solution {
public:
    
    int searchInSorted(vector<int>& arr, int start, int end, int target) {
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> originalIndices;

        // Store the original indices before sorting
        for (int i = 0; i < nums.size(); i++) {
            originalIndices[nums[i]].push_back(i);
        }

        // Sort the array to perform binary search
        vector<int> sortedNums = nums;  // Copy to avoid modifying original array
        sort(sortedNums.begin(), sortedNums.end());

        // Two pointer approach to find the two numbers
        int left = 0;
        int right = sortedNums.size() - 1;

        while (left < right) {
            int sum = sortedNums[left] + sortedNums[right];
            if (sum == target) {
                // Return the original indices from the hashmap
                if (sortedNums[left] == sortedNums[right]) {
                    int index1 = originalIndices[sortedNums[left]][0];
                    int index2 = originalIndices[sortedNums[right]][1];
                    return {index1, index2};
                } else {
                    int index1 = originalIndices[sortedNums[left]][0];
                    int index2 = originalIndices[sortedNums[right]][0];
                    return {index1, index2};
                }
                // // Ensure that index1 is less than index2
                // if (index1 > index2) {
                //     swap(index1, index2);
                // }
                
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {-1, -1};  // No valid pair found
    }
};