class Solution {
public:
    vector<int> v;
    int check(char c)
    {
        int a=0;
        switch(c)
        {
            case '(' : 
                return 1;
            
        case ')' : {return -1;};
        case '{' : {return 2;};
        case '}' : {return -2;};
        case '[' : {return 3;};
        case ']' : {return -3;};
        }
        return 0;
    }
    bool isValid(string s) {
       
        for(int i=0;i<s.length();i++)
        {
            if(check(s[i])>0)
            {
                v.push_back(check(s[i]));
            }
            else if(check(s[i])<0 && v.size()>0)
            {
                if(v[v.size()-1] + check(s[i])  ==  0)
                {
                    v.pop_back();
                }
                else
                {
                    return 0;
                }
            }
            else return 0;
        }
        if(v.size() == 0)
       { return 1;}
        else
        return 0;
        
    }
};