class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          int n = nums.size();
        int temp = 0;
        sort(nums.begin(),nums.end());
        set<int> s;
        for(int i=0;i<n-1;i++){
            s.insert(nums[i]);
            if(nums[i] == nums[i+1]){
                temp = nums[i];
            }
        }
        s.insert(nums[n-1]);
        vector<int> v;
        v.push_back(temp);
        int sum = (n * (n+1))/2;
        int total =0;
        for(auto i=s.begin();i != s.end();i++){
            total += *i ;
        }

        v.push_back(sum-total);

        
        return v;
    }
};