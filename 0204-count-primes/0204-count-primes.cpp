class Solution {
public:
    int countPrimes(int n) {
//         if(n ==0 || n==1 || n==2){return 0;}
        
//         int count=0;
//         for(int i=2;i<n;i++){
//             bool check = 0;
//             for(int j=2;j*j<=i;j++){
//                 if(i%j == 0){
//                     check =1;
//                 }
//             }
//             if(check == 0){
//                 count++;
//             }
//         }
//         return count;
        
        
        vector<bool > v (n,1);
        
        for(int i = 2;i*i<n;i++){
            if(v[i] == 1){
                for(int j = i*i;j<n;j+=i){
                    v[j] =0;
                }
            }
            
        }
        int t =0;
            for(int i=2;i<v.size();i++){
                if(v[i]==1) t++;
            }
        return t;
    }
};