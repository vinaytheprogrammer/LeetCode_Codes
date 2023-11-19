class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t=0,tt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                t++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[tt]=nums[i];
                tt++;
            }
        }
        while(t--)
        {
            nums[tt]=0;
            tt++;
        }
    }
};