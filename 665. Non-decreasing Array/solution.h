class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        for(int i = 1;i < nums.size();++i)
        {
            if(nums[i - 1] > nums[i])
            {
                count++;
                if(i - 2 < 0 || nums[i - 2] <= nums[i])
                    nums[i - 1] = nums[i];
                else
                    nums[i] = nums[i - 1];

            }
        }
        return count <= 1;
    }
};

/*
    假设数列是非递减数列 则遍历一遍有 A[i - 1] <= A[i]
    如果当前数字比前面数字小 则需要改变这个数字
    改变前面的数字或当前这个数字
*/