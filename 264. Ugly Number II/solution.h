class Solution {
public:
    int nthUglyNumber(int n) {
        static vector<int> nums;
        if(nums.empty())
        {
            for(long a = 1; a <= INT_MAX; a *= 2)
                for(long b = a; b <= INT_MAX; b *= 3)
                    for(long c = b; c <= INT_MAX; c *= 5)
                        nums.push_back(c);
        }
        sort(nums.begin(), nums.end());
        return nums[n - 1];
    }
};