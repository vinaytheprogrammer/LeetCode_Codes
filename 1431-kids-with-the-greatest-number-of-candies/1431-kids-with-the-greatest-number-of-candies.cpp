class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        
        int max = candies[0];
        
        for(int i=0;i<candies.size();i++){
            if(max<candies[i]){
                max = candies[i]; 
            }
        }
        
        vector<bool> v;
        for(int i=0;i<candies.size();i++){
            if(candies[i] + e >= max){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        
        return v;
    }
};