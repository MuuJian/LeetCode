class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int c = 0; c < n - 2; ++c)
        {
            int b = c + 1;
            int a = n - 1;
            while(b < a)
            {
                if(nums[a] + nums[b] > nums[c])
                {
                    ans += (a - b);
                    ++b;
                }
                else
                {
                    --a;
                }
            }
        }
        return ans;
    }
};


