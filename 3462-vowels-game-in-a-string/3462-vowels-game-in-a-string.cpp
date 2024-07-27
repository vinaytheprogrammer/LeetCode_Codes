class Solution {
public:
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


    bool doesAliceWin(string s) {
       int vowelCount = 0;
  for (char ch : s) {
    if (isVowel(ch)) {
      vowelCount++;
    }
  }
  return vowelCount  != 0; 
    }
};