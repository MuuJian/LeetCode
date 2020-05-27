class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "" || num2 == "")
            return "0";
        string res = "";
        int m =num1.size(), n = num2.size();
        vector<int> nums(m + n, 0);
        for(int i = m - 1; i >= 0; --i)
        {
            for(int j = n - 1; j >= 0; --j)
            {
                int val = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1, sum = val + nums[p2];
                nums[p1] += sum / 10;
                nums[p2] = sum % 10;
            }
        }
        for(auto val : nums)
        {
            if(!res.empty() || val != 0) res.push_back(val + '0');
        }
        
        return res.empty() ? "0" : res;
    }
};