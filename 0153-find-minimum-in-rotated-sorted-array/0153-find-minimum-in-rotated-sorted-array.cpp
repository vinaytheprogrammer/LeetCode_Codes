class Solution {
public:
    int findMin(vector<int>& a) {
        int s=0;
        int e=a.size()-1;
        int mid = s+(e-s)/2;
        while(s<e)
        {
            if(a[mid]>a[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return a[s];
    }
};