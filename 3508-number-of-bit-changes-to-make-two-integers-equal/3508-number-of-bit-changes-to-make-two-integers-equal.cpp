class Solution {
public:
    int minChanges(int n, int k) {
         if ((n & k) != k) {
        return -1;
    }
    
    
    int differingBits = n ^ k;
    
    
    int count = 0;
    while (differingBits != 0) {
        count += differingBits & 1;
        differingBits >>= 1;
    }
    
    return count;
    }
};