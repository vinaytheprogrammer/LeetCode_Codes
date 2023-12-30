class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
//         string t = "";
//         for(auto val : words)
//         {
//             // t += val.size();
//             t+=val;
//         }
        
//         map<char,int> m;
//         for(int i=0;i<t.size();i++)
//         {
//             m[t[i]]++;
//         }
        
//         // for(auto val : m)
//         // {
//         //     cout<<val.first<<" "<<val.second<<endl;
//         // }
//         char c =words[0][0];
//         int tt = m[c];
        
//         if(words.size()==1 && t.size()==1)
//             return 1;
//         for(auto v : m)
//         {
//             if((v.second !=tt) || words.size()==t.size())
                
//                 return 0;
//         }
//         return 1;
        
        
        
//     }
        
         unordered_map<char, int> counts;
        for (string word : words) {
            for (char c : word) {
                counts[c]++;
            }
        }
        
        int n = words.size();
        for (auto& [key, val] : counts) {
            if (val % n != 0) {
                return false;
            }
        }
        
        return true;
    }
};