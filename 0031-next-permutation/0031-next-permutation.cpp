class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int p = -1;
        
        // Step 1: Find the rightmost index 'p' where nums[p] < nums[p+1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                p = i;
                break;
            }
        }

        // If no such index is found, reverse the entire array (last permutation case)
        if (p == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the rightmost element greater than nums[p] and swap
        for (int i = n - 1; i > p; i--) {
            if (nums[i] > nums[p]) {
                swap(nums[i], nums[p]);
                break;
            }
        }

        // Step 3: Reverse the subarray to the right of index 'p'
        reverse(nums.begin() + p + 1, nums.end());
    }
};