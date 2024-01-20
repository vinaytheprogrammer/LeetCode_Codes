class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        
        string str;
        bool alt = 1;
        while(word1[i] != '\0' && word2[j] != '\0'){
            if(alt){
                str+= word1[i];
                i++;
                alt=!alt;
            }
            else{
                str+=word2[j];
                j++;
                alt=!alt;
            }
        }
        
        while(word1[i] != '\0'){
            str+=word1[i];i++;
        }
        while(word2[j] != '\0'){
            str+=word2[j];j++;
        }
        return str;
    }
};