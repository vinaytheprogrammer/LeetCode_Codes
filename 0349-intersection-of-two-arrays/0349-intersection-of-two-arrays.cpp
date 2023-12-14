class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        
        {
            
            for(auto value : nums1)
            {
                for(auto val : nums2)
                {
                    if(value == val)
                    {
                        s.insert(val);
                    }
                }
            }
        }
        vector<int> v;
        for(auto i : s)
        {
            v.push_back(i);
        }
        return v;
    }
};