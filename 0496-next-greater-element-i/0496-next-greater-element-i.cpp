// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int, int> m;
//         stack<int> s;

//         for (int i = nums2.size() - 1; i >= 0; i--) {
//             while (!s.empty() && s.top() <= nums2[i]) {
//                 s.pop();
//             }
//             if (s.empty()) {
//                 m[nums2[i]] = -1;
//             } else {
//                 m[nums2[i]] = s.top();
//             }
//             s.push(nums2[i]);
//         }

//         vector<int> ans;
//         for (int i = 0; i < nums1.size(); i++) {
//             ans.push_back(m[nums1[i]]);
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;  // Stores next greater elements
        stack<int> s;               // Monotonic decreasing stack

        // Process nums2 to find next greater elements
        for (int i = nums2.size() - 1; i >= 0; --i) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();  // Remove smaller elements as they are not needed
            }
            m[nums2[i]] = s.empty() ? -1 : s.top(); // Store next greater element
            s.push(nums2[i]);  // Push current element
        }

        // Fetch results for nums1
        vector<int> ans;
        ans.reserve(nums1.size()); // Optimize space allocation
        for (int num : nums1) {
            ans.push_back(m[num]); // Lookup in O(1)
        }

        return ans;
    }
};
