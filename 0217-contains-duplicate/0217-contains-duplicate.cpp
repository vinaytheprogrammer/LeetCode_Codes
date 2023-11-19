class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        if(s.size()!= nums.size())
            return 1;
        return 0;
        
    }
};