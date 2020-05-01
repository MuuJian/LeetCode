class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        int Max = 1, Min = 1;
        for(int num : nums)
        {
            if(num < 0) swap(Min, Max);
            Max = max(num, num * Max);
            Min = min(num, num * Min);
            res = max(res, Max);
        }
        return res;
    }
};