class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        if (n == 0) return 0; 
        vector<int> dist_nums;
        int num = nums[0];
        dist_nums.push_back(num);
        int k = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != num) {
                num = nums[i];
                dist_nums.push_back(num);
                k++;
            }
        }
        nums = dist_nums;
        return k;
    }

    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        vector<int> vec1(arr1, arr1 + n);
        vector<int> vec2(arr2, arr2 + m); 

        n = removeDuplicates(vec1);
        m = removeDuplicates(vec2);

        vector<int> Union;
        Union.reserve(n + m); 

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (vec1[i] < vec2[j]) {
                Union.push_back(vec1[i]);
                i++;
            } else if (vec1[i] > vec2[j]) {
                Union.push_back(vec2[j]);
                j++;
            } else {
                Union.push_back(vec1[i]);
                i++;
                j++;
            }
        }

        while (i < n) {
            Union.push_back(vec1[i]);
            i++;
        }

        while (j < m) {
            Union.push_back(vec2[j]);
            j++;
        }

        return Union;
    }
};