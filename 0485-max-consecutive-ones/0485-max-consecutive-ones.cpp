class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int t=0,max1=0,max2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                t++;
                max1=t;
            }
            else
            {
                t=0;
            }
            if(max1>max2)
            {
                max2=max1;
            }
        }
        return max2;
    }
};