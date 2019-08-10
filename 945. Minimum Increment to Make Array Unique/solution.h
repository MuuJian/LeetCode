class Solution {
public:
    int minIncrementForUnique(vector<int>& A) 
    {
        if(A.size() == 0)
            return 0;
        sort(A.begin(),A.end(),[](int i,int j){return i < j;});
        int count = 0;
        for(int i = 1;i < A.size();++i)
        {
           if(A[i] > A[i - 1]) continue;
            count += (A[i - 1] - A[i] + 1);
            A[i] = A[i - 1] + 1;
        }
        return count;
    }
};

/*
    先将数组排序 然后比较 统计
*/