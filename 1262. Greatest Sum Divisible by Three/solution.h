class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);
        for(auto num : nums)
        {
            vector<int> tmp(dp);
            for(auto s : tmp)
            {
                dp[(s + num) % 3] = max(dp[(s + num) % 3], s + num);
            }
        }
        return dp[0];
    }
};

/*
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 3 == 0)
            return sum;
        sort(nums.begin(), nums.end());
        vector<int> one;
        vector<int> two;
        for(int num : nums)
        { 
            if(num % 3 == 1)
                one.push_back(num);
            else if(num % 3 == 2)
                two.push_back(num);
        }
        if(sum % 3 == 1)
        {
            if(one.size() >= 1 && two.size() >= 2)
            {
                if(one[0] < two[0] + two[1])
                    return sum - one[0];
                else
                    return sum - two[0] - two[1];
            }
            else if(one.size() >= 1)
            {
                return sum - one[0];
            }
            else
            {
                return sum - two[0] - two[1];
            }
        }
        else
        {
           if(one.size() >= 2 && two.size() >= 1)
            {
                if(one[0] + one[1] > two[0])
                    return sum - two[0];
                else
                    return sum - one[0] - one[1];
            }
            else if(one.size() >= 2)
            {
                return sum - one[0] - one[1];
            }
            else
            {
                return sum - two[0];
            }
        }
    }
};
*/