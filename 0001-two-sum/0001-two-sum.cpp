class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> sum;

        for (int i = 0; i < n; i++) {
            int x = target - nums[i];
            if (sum.find(x) != sum.end()) {
                return {sum[x], i};
            }
            sum[nums[i]] = i;
        }

        return {};
        }
    };