class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 3) return 0; // Edge case: if less than 3 numbers, return 0 or handle accordingly
        
        int closest = nums[0] + nums[1] + nums[2]; // Initialize closest to the sum of the first three numbers
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }
                
                if (sum > target) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return closest;
    }
};
