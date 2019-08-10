class Solution {
public:
    bool isPerfectSquare(int num) {
        int val = sqrt(num);
        return val * val == num;
    }
};