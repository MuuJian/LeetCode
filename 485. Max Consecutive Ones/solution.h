class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, sum = 0;
        for(auto num : nums)
        {
            sum = (num + sum) * num;
            res = max(res, sum);
        }
        return res;
    }
};