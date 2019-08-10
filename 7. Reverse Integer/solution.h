class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        for(; x != 0; x /= 10) ans = ans * 10 + x % 10;
        return (ans < INT_MIN || INT_MAX < ans) ? 0 : ans;
    }
}; 