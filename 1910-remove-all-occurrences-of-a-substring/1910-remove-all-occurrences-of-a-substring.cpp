class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i=0;
        while(1){
            int t = s.find(part);
            if( t != string :: npos)
            s.erase(t,part.size());
            else
                break;
            // i++;
        }
        return s;
    }
};