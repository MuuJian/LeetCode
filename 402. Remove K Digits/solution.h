/*
把当前元素入栈,如果当前元素小于栈尾部的元素就删除尾部元素,一直删除到不小于为止.
还有需要处理的是 0000200 要去除 0.
*/


class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        int n = k, len = num.size(), cnt = 0;
        if(len == k || num == "") return "0";
        for(auto val : num)
        {
            while(!ans.empty() && n > 0 && val < ans.back())
            {
                --n;
                ans.pop_back();
            }
            ans += val;
        }
        while(ans[cnt] == '0') cnt++;
        ans = ans.substr(cnt,len-cnt-k);
        return !ans.empty()?ans:"0";
        
    }
};