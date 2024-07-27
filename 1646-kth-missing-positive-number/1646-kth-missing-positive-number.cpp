class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int s =0, e = arr.size()-1, mid = s + (e -s)/2;
        
        while(s <= e){
            
            int missing = arr[mid] - (mid +1);
            if(missing < k){
                s = mid  +1;
            }
            else{
                e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return k + e +1;
    }
};