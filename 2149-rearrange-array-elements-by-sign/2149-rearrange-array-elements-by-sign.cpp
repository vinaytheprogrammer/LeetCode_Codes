class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec;
        
        vector<int> pos, nev;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                nev.push_back(nums[i]);
            }
        }
        
        int p = 0, n = 0;
        bool flag = 0;
        
        for(int i=0;i<nums.size();i++){
            if(!flag){
            vec.push_back(pos[p]);p++;
                flag = !flag;
            }else{
                vec.push_back(nev[n]);n++;
                flag = !flag;
            }
        }
        
        return vec;
    }
};