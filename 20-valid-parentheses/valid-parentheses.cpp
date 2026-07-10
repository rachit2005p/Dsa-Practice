#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        // A stack to keep track of opening brackets
        stack<char> st;
        
        // Map to store the matching pairs for quick lookup
        unordered_map<char, char> bracketMap = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            // If the character is a closing bracket
            if (bracketMap.count(c)) {
                // Check if the stack is empty or the top doesn't match
                if (st.empty() || st.top() != bracketMap[c]) {
                    return false;
                }
                st.pop(); // Found a match, remove from stack
            } else {
                // If it's an opening bracket, push it onto the stack
                st.push(c);
            }
        }

        // If the stack is empty, all brackets were matched correctly
        return st.empty();
    }
};;