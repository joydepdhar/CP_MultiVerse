class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end) {  // Use 'st < end' instead of 'st <= end' to avoid unnecessary checks
            int mid = st + (end - st) / 2;
            
            // Ensure mid is even, so it pairs correctly with mid+1
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Unique element is in the right half
                st = mid + 2;
            } else {
                // Unique element is in the left half
                end = mid;
            }
        }
        return nums[st];  // 'st' points to the single element
    }
};
