class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int s=0,e=nums.size()-1;
        vector<int> ans;
        int count=0;
        ans.push_back(nums[0]);
        // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                 ans.push_back(nums[i+1]);
            }
        }
        nums=ans;
        return ans.size();
    }
};