class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        //for 3,2,1 ==> return 1,2,3    --------
        vector<int> exceptional = nums; // One line Assignment
        
        sort(exceptional.rbegin(), exceptional.rend()); 
                
        
        if(exceptional == nums){ // One line Compare
            sort(nums.begin(), nums.end());
            return;
        }
        
        
        // ---
        
        // rest of the cases
        
        vector<int> vec;
        int trace;
        //iterate from the last to find breaking location
        for(int i = nums.size() - 1; i > 0; i--){
            
            if( nums[i] > nums[i - 1]){
               
                // copy them in a seprate vector
                for(int it = i - 1; it < nums.size(); it++){
                    vec.push_back(nums[it]);
                }
                
                trace = i - 1; // mark this location as trace
                break;
            }
        }
        
        // for getting the next greater number of the trace
        sort(vec.begin(), vec.end());
        int get;
        for(int i = 0 ;i < vec.size() - 1;i++){
            if((nums[trace] == vec[i]) && vec[i] != vec[i+1] ) {
                get = vec[++i];
                break;
            }
        }
        
        //delete that get value from the temporary vector
        int temp = nums[trace];
        auto it = find(vec.begin(), vec.end(), get);
        
        if(it != vec.end()){
            vec.erase(it);
        }
       
        //push that get value in nums
        sort(vec.begin(),vec.end());
        nums[trace] = get;
        
        //update nums with sorted value after the get value(trace location)
        int k = 0;
        for(int j = trace+1; j < nums.size(); j++){
            nums[j] = vec[k];k++; 
        }
        
        
    }
};