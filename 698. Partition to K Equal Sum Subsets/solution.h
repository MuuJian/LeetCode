class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % k != 0) return false;
        sort(nums.begin(), nums.end());
        vector<int> v(k, 0);
        return helper(nums, v, sum / k, nums.size() - 1);
    }
    bool helper(vector<int>& nums, vector<int>& v, int target, int idx)
    {
        if(idx == -1)
        {
            for(auto a : v)
                if(a != target) return false;
            return true;
        }
        
        int num = nums[idx];
        for(int i = 0; i < v.size(); ++i)
        {
            if(v[i] + num > target) continue;
            v[i] += num;
            if(helper(nums, v, target, idx - 1)) return true;
            v[i] -= num;
        }
        return false;
    }
};