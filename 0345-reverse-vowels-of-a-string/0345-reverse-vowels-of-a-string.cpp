class Solution {
public:
            // void lower(char &x)        
            // {   
            //     if(x >= 'A' &&  x<='Z') x+=32;
            // }
            
            int vowel(char &x)
            {
                if(x == 'a' || x=='e' || x== 'i' || x=='o' ||x=='u' || x == 'A' || x=='E' || x== 'I' || x=='O' ||x=='U' ){
                    return 1;
                }
                return 0;
            }
    string reverseVowels(string s) {
        int count=0;
        for(auto x :s){
            if(vowel(x)){
                count++;
            }
        }
        if(count ==1){
            return s;
        }
        
        int i=0, j=s.size()-1;
        bool pass =0;
        while(i<=j){
            
            if(vowel(s[i]) && vowel(s[j])){
                swap(s[i],s[j]);
                pass =!pass;
            }
            if(!vowel(s[i]))
            i++;
            if(pass)
                {i++;j--;pass=!pass;}
            if(!vowel(s[j]))
            j--;
        }
            
        return s;
    }
};