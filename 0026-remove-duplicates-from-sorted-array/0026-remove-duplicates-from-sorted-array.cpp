class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
    unordered_set<int> s; 
    int idx = 0;  
    for (int i = 0; i < arr.size(); i++) {
        if (s.find(arr[i]) == s.end()) { 
            s.insert(arr[i]);  
            arr[idx++] = arr[i];  
        }
    }
    return s.size(); 
}
};