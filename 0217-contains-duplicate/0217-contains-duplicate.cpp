class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int t=0;
        // nums.push_back(-1);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                t++;
            }
        }
        if(t>0)
            return true;
        return 0;
    }
};