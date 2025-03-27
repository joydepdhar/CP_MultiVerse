class Solution {
public:
    string interpret(string command) {
        string result;

    size_t pos = 0;
    while ((pos = command.find("()", pos)) != string::npos) {
        command.replace(pos, 2, "o");
    }
    pos = 0;
    while ((pos = command.find("(al)", pos)) != string::npos) {
        command.replace(pos, 4, "al");
    }
    
    return command;
    }
};