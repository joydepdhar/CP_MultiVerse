#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k > n
        int count = 0; // Track number of elements moved
        
        for (int start = 0; count < n; start++) {
            int current = start;
            int prev_value = nums[start];

            do {
                int next = (current + k) % n;
                std::swap(nums[next], prev_value);
                current = next;
                count++;
            } while (start != current);
        }
    }
};
