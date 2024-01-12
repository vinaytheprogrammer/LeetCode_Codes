class Solution {
public:
//     int pivotIndex(vector<int>& nums) {
        
//     }
   int pivotIndex(vector<int> nums) {
     int totalSum = accumulate(nums.begin(), nums.end(), 0);  // Calculate total sum
    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        // If the current element is the pivot, the right sum is the total sum minus the left sum and the current element
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];  // Accumulate left sum
    }

    return -1;  // No pivot found
}

    
    
};