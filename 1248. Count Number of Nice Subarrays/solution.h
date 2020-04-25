class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int tot = 0, cnt = 0, ans = 0;
        for(int i = 0, j = 0; i < n; ++i)
        {
            if(nums[i] % 2 == 1)
            {
                ++cnt;
                if(cnt == k)
                    tot = 0;
                
                while(cnt == k)
                {
                    ++tot;
                    if(nums[j] %2 == 1)
                        --cnt;
                    ++j;
                }
            }
            ans += tot;
        }
        return ans;
    }
};

