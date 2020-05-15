class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size(), start = -1, end = -2;
        int mn = nums[n - 1], mx = nums[0];
        for(int i = 1; i < n; ++i)
        {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[n - i - 1]);
            if(mx > nums[i]) end = i;
            if(mn < nums[n - i - 1]) start = n - i - 1;
        }
        return end - start + 1;
    }
};