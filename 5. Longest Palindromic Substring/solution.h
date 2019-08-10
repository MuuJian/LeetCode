class Solution {
public:
    string longestPalindrome(string s) 
    {
      if(s=="")
          return s;
      vector<vector<bool>> dp(s.length(),vector<bool>(s.length(),false));
      int maxlen = 1;
      int start = 0;
        for(int i = 0;i<s.length();++i)
            for(int j = 0;j<=i;++j)
            {
                if(i-j<2)
                    dp[j][i]=(s[i]==s[j]);
                else
                    dp[j][i]=(s[i]==s[j]&&(i - j <= 2 || dp[j+1][i-1]));
                
                if(dp[j][i]&&maxlen<=i-j+1)
                {
                    maxlen = i-j+1;
                    start = j;
                }
            }
        return s.substr(start,maxlen);
    }
};

/*

https://www.youtube.com/watch?v=m2Mk9JN5T4A

*/