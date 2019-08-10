class Solution {
public:
    int countArrangement(int N) {
        int res;
        vector<int> visit(N + 1,0);
        helper(N,1,visit,res);
        return res;
    }
    
    void helper(int N,int pos,vector<int>& visit,int& res)
    {
        if(pos > N)
        {
            res++;
            return;
        }
        for(int i = 1;i <= N;++i)
        {
            if(visit[i] == 0 && (pos % i == 0 || i % pos == 0))
            {
                visit[i] = 1;
                helper(N,pos + 1,visit,res);
                visit[i] = 0;
            }
        }
        return;
    }
};