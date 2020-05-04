class Solution {
public:
    int nthUglyNumber(int n) {
        static vector<int> nums{1};
        static int i1 = 0, i2 = 0, i3 = 0;
        int num = 1;
        int target = 0;
        while(nums.size() < n)
        {
            int next2 = nums[i1] * 2;
            int next3 = nums[i2] * 3;
            int next5 = nums[i3] * 5;
            int next = min(next2, min(next3, next5));
            if(next == next2) ++i1;
            if(next == next3) ++i2;
            if(next == next5) ++i3;
            nums.push_back(next);
        }
        return nums[n - 1];
    }
};