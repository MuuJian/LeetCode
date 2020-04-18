class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.empty()) return 0;
        const int r = *max_element(nums.begin(), nums.end());
        vector<int> sums(r + 1, 0);
        for(int num : nums)
        {
            sums[num] += num;
        }
        
        for(int i = 2; i <= r; ++i)
        {
            sums[i] = max(sums[i - 1], sums[i] + sums[i - 2]);
        }
        return sums[r];
    }
};