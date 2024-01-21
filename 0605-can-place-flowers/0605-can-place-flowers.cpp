class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        
        int first=-1,last=-1;
        bool flag =1;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                if(flag){
                    first = i;
                    last = i;
                    flag = !flag;
                }
                last = i;
            }
        }
        
        if(first == -1){
            count += (flowerbed.size() + 1)/2;
        }
        else{
            count += first/2;
            count += (flowerbed.size() - last -1)/2;
            
            int t =0;
            for(int i = first ; i<= last ;i++){
                if(flowerbed[i] != 0){
                    count+=(t-1)/2;
                    t=0;
                }
                else{
                    t++;
                }
            }
            
            count += (t-1)/2;
        }
        
        
        return n <= count;
    }
};