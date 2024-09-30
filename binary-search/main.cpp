class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int start = 0;
        int end = N-1;
        int mid;
        if (arr[0] == K || arr[N-1] == K) {
            return 1;
        }
        while (start <= end) {
            mid = (start+end)/2;
            if (arr[mid] == K) {
                return 1;
            }
            else if (arr[mid] < K) {
                start = mid+1;                
            }
            else {
                end = mid-1;
            }
        }
        return -1;
    }
};