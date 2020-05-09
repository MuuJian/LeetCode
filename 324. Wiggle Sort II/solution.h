class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int n = (nums.size() + 1) / 2;
        int s = nums.size();
        int j = s;
        for(int i = 0; i < s; ++i)
            nums[i] = i & 1 ? temp[--j] : temp[--n];
    }
};