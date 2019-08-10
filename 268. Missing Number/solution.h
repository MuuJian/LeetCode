class Solution {
public:
    static bool swap(int i,int j) {return i<j;}
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),swap);
        int temp=nums.size();
        for(int val = 0;val<nums.size();++val)
        {
            if(val!=nums[val]) 
            {
                temp = val; 
                break;
            }
        }
        return temp;
    }
    
    
};