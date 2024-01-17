class Solution {
public:
    bool isPalindrome(string s) {
         string S="";
    int i=0;
    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
        if((s[i] >= 'a' && s[i] <='z') || (s[i] >= '0' && s[i] <= '9')){
            S+=s[i];
        }
        i++;        
    }

    int k = S.size()-1;
    i=0;
    while(i<=k){
        if(S[i] != S[k]){
            return 0;
        }
        i++;k--;
    }
    return 1;

    }
};