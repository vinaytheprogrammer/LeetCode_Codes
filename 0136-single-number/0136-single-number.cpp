class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i=i+2)
        {
            if(nums[i]!=nums[i+1])
            {
                t=1;
                return nums[i];
            }
             
        }
        if(t!=1)
            return nums[nums.size()-1];
        return -1;
    }
};