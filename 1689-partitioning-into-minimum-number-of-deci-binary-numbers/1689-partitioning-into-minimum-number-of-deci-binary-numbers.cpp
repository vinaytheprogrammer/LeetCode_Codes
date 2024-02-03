class Solution {
public:
    int minPartitions(string n) {
        int maxi = -1;
        
        for(auto x: n){
            
            if(x - '0' > maxi){
                maxi = x - '0';
            }
        }
        return maxi;
    }
};