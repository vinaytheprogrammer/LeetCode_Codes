class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int i= 0;
        int j= 0;
        vector<int> ans;
        while(i<n && j<m){
            
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i++]);     
            }
            else
            {
                ans.push_back(nums2[j++]);
            }
        }
        while(i<n){
            ans.push_back(nums1[i++]);
        }
        while(j<m){
            ans.push_back(nums2[j++]);
        }
     nums1=ans;   
    }
};