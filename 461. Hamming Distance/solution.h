class Solution {
public:
    int hammingDistance(int x, int y) {
        int i = x ^ y;
        int count = 0;
        while(i > 0)
        {
            count += i & 1;
            i = i >> 1;
        }
        return count;
    }
};