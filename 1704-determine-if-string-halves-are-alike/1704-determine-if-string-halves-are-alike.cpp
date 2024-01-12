class Solution {
public:
    bool halvesAreAlike(string s1) {
        int n = s1.size();
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if((s1[i] == 'a' || s1[i] == 'u' || s1[i] == 'o' || s1[i] == 'i' || s1[i] == 'e') && i<n/2)
            {
               a++; 
            }
            else if((s1[i] == 'a' || s1[i] == 'u' || s1[i] == 'o' || s1[i] == 'i' || s1[i] == 'e') && i>=n/2)
            {
                b++;
            }
        }
        if(a==b)
            return 1;
        return 0;
    }
};