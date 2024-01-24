class Solution {
public:
    void sortColors(vector<int>& nums,int n = -1) {
        if(n == -1){
            n = nums.size();
        }
        if( n==0 ||n == 1)
           return ;
        bool check = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]); check =1;
            }
        }
         if(!check){
                return;
            }
         sortColors(nums,n-1);
    }
};