class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for(auto c : s)
        {
            if(c == '{' || c == '(' || c == '[')
            {
                v.push(c);
            }
            else
            {
                if(v.empty()) 
                    return false;
                if(c == '}' && v.top() != '{') return false;
                if(c == ')' && v.top() != '(') return false;
                if(c == ']' && v.top() != '[') return false;
                v.pop();
            }
        }
        return v.empty();
    }
};