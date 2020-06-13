class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> res;
        multiset<int> st(A.begin(), A.end());
        for(const auto val : B)
        {
            auto it = (*st.rbegin() <= val) ? st.begin() : st.upper_bound(val);
            res.push_back(*it);
            st.erase(it);
        }
        return res;
    }
};