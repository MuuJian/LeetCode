class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans;
        int d = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int n = 0; n < nums.size() - 2; n++)
        {
            int left = n + 1;
            int right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[n] + nums[left] + nums[right];
                if(sum == target)
                    return sum;
                int diff = abs(sum - target);
                if(d > diff)
                {
                    d = diff;
                    ans = sum;
                }
                if(sum > target)
                {
                    --right;
                }
                else
                {
                    ++left;
                }
            }
        }
        return ans;
    }
};