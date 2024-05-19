class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        //for accepting case like [1,2,0,1] where duplicate at last
        sort(nums.begin(),nums.end());

       
        //remove duplicates
        
        int it =0;
        for(int i=1; i <nums.size(); ++i){
            if(nums[i] != nums[it]){
                it++;
                nums[it] = nums[i];
            }
        }
        // resize the vector so extra repeating elements will be erased
        nums.resize(it + 1);

        
        
        
        //ensuring consecutive terms will set together
        sort(nums.rbegin(),nums.rend());
        
        
        
        int count =0, maxi =0 ;
        
        
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] - nums[i+1] == 1){
                count++;
            }else count = 0;
            
            maxi = max(maxi, count);
        }
        
        return maxi +1;
    }
}; 