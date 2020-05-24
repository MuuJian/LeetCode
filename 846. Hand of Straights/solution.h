class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        map<int, int> m;
        for(auto num : hand)
        {
            ++m[num];
        }
        while(!m.empty())
        {
            int start = m.begin() -> first;
            for(int i = 0; i < W; ++i)
            {
                if(!m.count(start + i)) return false;
                if(--m[start + i] == 0) m.erase(start + i);
            }
        }
        return true;
    }
};


/*

超内存了。。。。

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.size() % W != 0) return false;
        const int r = *max_element(hand.begin(), hand.end());
        vector<int> nums(r + W, 0);
        for(auto num : hand)
        {
            ++nums[num];
        }
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] > 0)
            {
                for(int j = 1; j < W; ++j)
                {
                    nums[i + j] -= nums[i];
                }
                nums[i] = 0;
            }
            else if(nums[i] < 0)
            {
                return false;
            }
        }

        return true;
    }
};
*/