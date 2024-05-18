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
        
        // rest of the work
        
        vector<int> vec;
        int trace;
        //iterate from the last to find breaking location
        for(int i = nums.size() - 1; i > 0; i--){
            
            if( nums[i] > nums[i - 1]){
               
                // copy them in a seprate vector
                for(int it = i - 1; it < nums.size(); it++){
                    vec.push_back(nums[it]);
                }
                
                trace = i - 1;
                break;
            }
        }
        
        for(auto val : vec){
            cout<<val<<" ";
        }
        
        sort(vec.begin(), vec.end());
        int get;
        for(int i = 0 ;i < vec.size() - 1;i++){
            if((nums[trace] == vec[i]) && vec[i] != vec[i+1] ) {
                get = vec[++i];
                break;
            }
        }

        int temp = nums[trace];
        auto it = find(vec.begin(), vec.end(), get);
        
        if(it != vec.end()){
            vec.erase(it);
        }
       
        sort(vec.begin(),vec.end());
        nums[trace] = get;
        
        int k = 0;
        for(int j = trace+1; j < nums.size(); j++){
            nums[j] = vec[k];k++; 
        }
        
        
    }
};