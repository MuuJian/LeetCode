class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> v;
        int mx = INT_MIN;
        auto func = [&](){  
            istringstream iss(s);
            string buf;
            while(iss >> buf)
            {
                mx = max(mx, static_cast<int>(buf.size()));
                v.push_back(buf);
            }
        };
        func();
        vector<string> res(mx);
        for(int i = 0; i < mx; ++i)
        {
            for(auto& str : v)
            {
                res[i] += i < str.size() ? str[i] : ' ';
            }
            while (res[i].back() == ' ') 
                res[i].pop_back();
        }
        return res;
    }
    
  
};