class Solution {
public:
    bool isequal(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i] != arr2[i]){
                return 0;
            }
        }
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        int window = s1.size();
        
        int count1[26]={0};
        
        for(int i=0;i<s1.size();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        
        int count2[26]={0};
        int i=0;
        while(i<window && i< s2.size()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        
        if(isequal(count1,count2)){
            return 1;
        }
        
        
        while(i < s2.size()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
            index = s2[i-window]-'a';
            count2[index]--;
            
            if(isequal(count1,count2)){
            return 1;
            }
        
            
            i++;
        }
        
        return 0;
        
    }
};