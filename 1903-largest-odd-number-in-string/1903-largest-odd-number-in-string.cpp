class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for(int i = num.size() -1; i>= 0; i--){
            char ch = num[i];
            int temp = (int)ch;
            if(temp%2 != 0){
                index = i;
                break;
            }
        }
        
        string str = num.substr(0,index+1);
        return str;
    }
};