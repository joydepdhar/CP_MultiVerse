class Solution {
public:
    string defangIPaddr(string address) {
        string add;
        for(char c : address) {
            if(c == '.') {
                add += "[.]";
            } else {
                add += c;
            }
        }
        return add;
    }
};
