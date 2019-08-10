class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto begin = digits.rbegin(); begin != digits.rend(); ++begin)
        {
            if(*begin < 9)
            {
                ++*begin;
                return digits;
            }
            *begin = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};