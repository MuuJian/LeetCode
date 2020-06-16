class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        int mx = INT_MIN, secondmx = INT_MIN, mxid = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] > mx)
            {
                secondmx = mx;
                mx = nums[i];
                mxid = i;
            }
            else if(nums[i] > secondmx)
                secondmx = nums[i];
        }
        return (mx - secondmx >= secondmx) ? mxid : -1;
    }
};