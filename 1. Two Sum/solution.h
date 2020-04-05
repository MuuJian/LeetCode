class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int a = 0; a < nums.size(); ++a)
        {
            m[nums[a]] = a;
        }   // map访问下标(key)如果不存在会插入新的pair value取默认值

        
        for(int a = 0; a < nums.size(); ++a)
        {
            if(m.count(target - nums[a]) && (m[target - nums[a]] != a))
            {
                return {a, m[target - nums[a]]};
            }
        }
        return {};
    }
};

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map m;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (m.count(target - nums[i]))
            {
                return {i, m[target - nums[i]]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
*/