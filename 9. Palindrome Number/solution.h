/*
因为是回文所以判断一半就行了 要注意的是121
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0 && x!=0))
            return false;
        
        int Reverse = 0;
        while(x>Reverse)
        {
            Reverse = Reverse * 10 + x % 10;
            x = x/10;
        }
        return x == Reverse || x == Reverse / 10;
    }
};