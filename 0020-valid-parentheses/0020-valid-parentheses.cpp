#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }
            else if (stack.size() == 0) {
                return false;
            }
            else {
                char top = stack.top();
                stack.pop();
                if (top == '(' && c != ')') {
                    return false;
                }
                if (top == '{' && c != '}') {
                    return false;
                }
                if (top == '[' && c != ']') {
                    return false;
                }
            }
        }
        if (stack.size() != 0) {
            return false;
        }
        else {
            return true;
        }
        
    }
};