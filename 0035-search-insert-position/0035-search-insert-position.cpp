class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                return i;
            }
            else if(i<nums.size()-1 && target > nums[i]  &&  target < nums[i+1])
            {
                return i+1; 
            }
            else if(target > nums[nums.size()-1]) return nums.size();
            else if(target < nums[0])
                return 0;
        }
        return -1;
    }
};