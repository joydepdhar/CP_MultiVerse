#include <sstream>

class Solution {
public:
    string defangIPaddr(string address) {
        std::ostringstream add;
        for (char c : address) {
            if (c == '.') {
                add << "[.]";
            } else {
                add << c;
            }
        }
        return add.str();
    }
};
