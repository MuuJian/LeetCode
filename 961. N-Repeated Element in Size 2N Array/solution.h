class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n = A.size() / 2;
        unordered_map<int, int> m;
        for(auto a : A)
        {
            ++m[a];
        }
        for(const auto& pair : m)
        {
            if(pair.second == n)
                return pair.first;
        }
        return 0;
    }
};