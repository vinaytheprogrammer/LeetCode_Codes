using namespace std;
class Solution {
public:
    int climbStairs(int n) {
       int a = 1, b = 2, c;
        if(n == 1 || n== 2){
            return n;
        }
        for(int i =2; i< n;i++){
            c= a+b;
            a = b;
            b = c;
        }
        return c;
    }
};