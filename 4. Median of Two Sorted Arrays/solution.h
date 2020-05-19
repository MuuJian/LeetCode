class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int s = m + n;
        vector<int> nums(s);
        
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        if(s % 2 != 0){
            return nums[s / 2];
        }else{
            return (nums[s / 2] + nums[(s / 2) - 1]) * 0.5;
        }
    }
};