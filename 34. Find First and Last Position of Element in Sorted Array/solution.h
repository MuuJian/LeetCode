/* 
    二分搜索上界和下界.
    还可以直接STL...
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto range = equal_range(nums.begin(),nums.end(),target);
        if(range.first < range.second)
            return vector<int>{range.first - nums.begin(),range.second - nums.begin() - 1};
        else
            return vector<int>{-1,-1};
    }
    
};

*/

class Solution {
public:
    int first, last;
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        first = -1;
        last = -1;
        getFirstK(nums, target, 0, nums.size() - 1);
        getLastK(nums, target, 0, nums.size() - 1);
        v.push_back(first);
        v.push_back(last);
        return v;
    }
    
    void GetFirstK(vector<int>& nums,int target,int start,int end)
    {
        if(start > end) return;
        int mid = start + (end - start) / 2;
        if(target == nums[mid])
        {
            first = mid;
            GetFirstK(nums,target,start,mid - 1);
        }
        else if(target < nums[mid])
        {
            GetFirstK(nums,target,start,mid - 1);
        }
        else
        {
            GetFirstK(nums,target,mid + 1,end);
        }
    }

    void GetLastK(vector<int>& nums,int target,int start,int end)
    {
        if(start > end) return;
        int mid = start + (end - start) / 2;
        if(target==nums[mid])
        {
            last = mid;
            GetFirstK(nums,target,mid + 1,end);
        }
        else if(target < nums[mid])
        {
            GetFirstK(nums,target,start,mid - 1)
        }
        else
        {
            GetFirstK(nums,target,mid + 1,end);
        }
    }
};