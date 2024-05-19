class Solution {
public:
    
        string removeOuterParentheses(string s) {
            int v = 0;
            string str;
            for(int i=0 ;i<s.size();i++){
                if(s[i] == '(')
                    v++;
                 
                
                if(v > 1){
                    if(s[i] == '(')
                        str += '(';
                    else if(s[i] == ')')
                        str += ')';
                }
                if(s[i] == ')')
                    v--;
            }
            return str;
        }
};