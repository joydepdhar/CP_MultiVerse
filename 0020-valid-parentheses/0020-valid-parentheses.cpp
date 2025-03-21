
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;  // Corrected stack declaration
        
        for(int i = 0; i < s.size(); i++) {  // Use 's' instead of 'str'
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.empty()) {  // Use .empty() instead of checking size()
                    return false;
                }
                char top = st.top();
                if((top == '(' && s[i] == ')') ||
                   (top == '{' && s[i] == '}') ||
                   (top == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false;  // Added missing semicolon
                }
            }
        }
        return st.empty();  // Use .empty() instead of size() == 0
    }
};