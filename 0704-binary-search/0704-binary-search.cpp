class Solution {
    private: 
    int solve(vector<int> &nums,int s,int e,int target){
    if(s>e){
        return -1;
    }

    
    int mid = (s+e)/2;
    // cout<<s<<" "<<e<<endl;
    if(nums[mid] == target){
        return mid;
    }

    
    if(nums[mid]>target){
        return solve(nums,s,mid-1,target);
    }
    else
        return solve(nums,mid+1,e,target);
    }
    public:
    
    int search(vector<int>& nums, int target) {
        return solve(nums,0,nums.size()-1,target);    
    }
};