class Solution {
  public:
    int romanToInt(string str) {
        // code here
        unordered_map<char, int> romanLetters;
        romanLetters['I'] = 1;
        romanLetters['V'] = 5;
        romanLetters['X'] = 10;
        romanLetters['L'] = 50;
        romanLetters['C'] = 100;
        romanLetters['D'] = 500;
        romanLetters['M'] = 1000;
        
        int n = str.length();
        int result = 0;
        
        for(int i = 0; i<n; i++){
            if(i != n-1 && romanLetters[str[i]] < romanLetters[str[i+1]])
                result -= romanLetters[str[i]];
            else{
                result += romanLetters[str[i]];
            }
        }
        
        return result;
    }
};