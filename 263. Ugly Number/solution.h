class Solution {
public:
    bool isUgly(int num) {
        while(num == 0) return false;
        vector<int> nums{2,3,5};
        for(auto a : nums)
            while(num && num % a == 0) num = num / a;
        return num == 1;
    }
};