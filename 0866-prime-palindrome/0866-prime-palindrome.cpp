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
    
    bool palindrome(long long n){
        // Not Possible correctly for all inpur in recursive method
        string num = to_string(n);
        
        int s = 0;
        int e = num.size()-1;
        
        while(s<e){
            if(num[s] != num[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
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