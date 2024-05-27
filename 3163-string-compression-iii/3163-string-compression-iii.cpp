class Solution {
public:
    string compressedString(string word) {
        
        string comp= "";
        int count =1, flag =0;
        
        
        for(int i=1;i<=word.size();i++){
            if(word[i-1] == word[i]){
                count++;
                if(count == 9){
                    comp +=to_string(count);
                    comp += word[i-1];
                    count -= 9;
                }
            }else {
                if(count > 0)
                {comp +=to_string(count);
                comp += word[i-1];}
                count = 1;
            }
        }
        
       
        return comp;
    }
};