class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums[0]*nums[1];
        int y = nums[nums.size()-1]*nums[nums.size()-2];
        if(x>y)
            return x-y;
        else
            return y-x;
    }
};