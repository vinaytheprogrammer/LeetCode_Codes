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
    
    
    vector<string> splitString(const string& str) {
        istringstream iss(str);
        vector<string> result;
        string word;

        while (iss >> word) {
            result.push_back(word);
        }

        return result;
    }
};