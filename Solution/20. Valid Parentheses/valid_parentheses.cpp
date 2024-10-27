class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> map;

        map[')'] = '(';
        map['}'] = '{';
        map[']'] = '[';

        for(char c : s) {
            if(map.count(c) == 0) {
                stack.push(c);
            } else {
                if(stack.empty() || stack.top() != map[c]) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};