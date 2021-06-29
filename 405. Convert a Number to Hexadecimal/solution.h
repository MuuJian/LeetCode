class Solution {
public:
    string toHex(int num) {
        string res = "", str = "0123456789abcdef";
        unsigned int num2 = num;
        while(num > 0)
        {
            res = str[num & 0xf] + res;
            num >>= 4;
        }
        return res;
    }
};

/*

if b = 2 ^ N;

then a % b = a & (N - 1);

*/
