class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if(strs.empty())
           return "";
        sort(strs.begin(), strs.end());
        string str = "";int k=0, count =0;
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j =0; j<strs.size(); j++){
                if(ch == strs[j][i]) count++;
                else break;
            }
            if(count == strs.size()) str+= ch;
            else break;
            count=0;
        }
        return str;
    }
}; 