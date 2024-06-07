class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        vector<string> v = splitString(s);
        
        for(int i = 0; i < v.size(); i++){
               st.push(v[i]);
        }

        string ans;

        while(!st.empty()){
            ans += st.top();
            ans += " ";
            st.pop();
        }
        
        ans.pop_back();
        return ans;
    }
    
    // logic for removing string from a sentence
    
    vector<string> splitString(const string& str) {
        istringstream iss(str); //Create a string stream from the input string.
        vector<string> result;
        string word;

        while (iss >> word) { //Read words from the stream into word until no more words are found.
            result.push_back(word);
        }

        return result;
    }
};