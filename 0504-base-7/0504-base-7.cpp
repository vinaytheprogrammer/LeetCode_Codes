class Solution {
public:
    string convertToBase7(int n) {
        string s="";
        if(n == 0)
            return "0";
        bool flag = 0;
        if(n < 0){
            flag = 1;
            n = -n;
        }
        int r=0;
        while(n!=0){
            r = n % 7;
            s+=(r+'0');
            n = n / 7;
        }
        reverse(s.begin(),s.end());
        if(flag){
            s = '-' + s;
        }
        return s;
    }
};