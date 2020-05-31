class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        unordered_map<int, int> m;
        for(auto a : A)
        {
            ++m[a];
        }
        vector<int> key;
        for(auto it : m)
        {
            key.push_back(it.first);
        }
        sort(key.begin(), key.end(), [](int a, int b){return abs(a) < abs(b);});
        for(auto i : key)
        {
            if(m[i] > m[i * 2])
                return false;
            m[i * 2] -= m[i];
        }
        return true;
    }
};