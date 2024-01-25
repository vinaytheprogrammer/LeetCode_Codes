class Solution {
public:
    bool prime(long long n){
        if(n == 1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                return 0;
            }
        }
        
        return 1;
    }
    
    bool palindrome(long long n,int c= -1){
        string num = to_string(n);
        
        if(num.size() <= 1){  
            return 1;
        }
        
        if(c == -1)  // handling n = 11
        {
            if(num.size() == 2)
            if(num[0] == num[1])
                return 1;
        }
        
         
        int s = 0;
        int e = num.size()-1;
        if(s>e){
             return 0;
        }

        if(num[s] != num[e])   // handling n = 122
        {
          return 0;
        }  
        s++;
        e--;
        
        string str = num.substr(s,e);
        s--;e++;
        if(str[0]=='0' && str[str.size()-1] != '0')  // handling n = 10221
        return 0;
        while((str[0]=='0' && str[str.size()-1] == '0')) // handling n = 1000002000001 or 10002001
        {
            str= str.substr(1,str.size()-2); 
            if(str[0]=='0' && str[str.size()-1] != '0')
                return 0;
        }
        
        num = str;
        
        if(num.size() <= 1){
            return 1;
        }
        
        if(num[0] != num[num.size()-1])
        {
          return 0;
        }  
        
        return  palindrome(stoi(num.substr(s,e)), 0);
    }
    
    
    long long primePalindrome(long long n) {
        if (99899*1e2 <= n && n <= 1e8)
        return 100030001;
        else{
               while((!prime(n)) || !palindrome(n) ){
                n++;
                }
             
            return n;
        }
    }
};