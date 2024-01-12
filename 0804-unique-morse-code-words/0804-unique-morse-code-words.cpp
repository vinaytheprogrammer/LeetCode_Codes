class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string str[]  = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> s;
        
        for (const string& word : words) {
        string st = "";
        for (char ch : word) {
            st += str[ch - 'a'];
        }
        s.insert(st);
    }
return s.size();
    }
};