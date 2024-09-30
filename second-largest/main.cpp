class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max = arr[0];
        int max2 = -1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) {
                // max2 = max;
                max = arr[i];
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != max) {
                max2 = arr[i];
                break;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max2 && arr[i] < max) {
                max2 = arr[i];
            }
        }
        if (max == max2) {
            return -1;
        }
        return max2;
        
    }
};