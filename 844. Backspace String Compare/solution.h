class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return helper(S) == helper(T);
    }
    
    string helper(string S)
    {
        string res = "";
        for(const auto& c : S)
        {
            if(c == '#')
            {
                if(!res.empty())
                    res.pop_back();
            }
            else
                res.push_back(c);
        }
        
        return res;
    }
};