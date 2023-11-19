class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=++t)
            {
                return t;
            }
        }
        return t+1;
        
    }
};