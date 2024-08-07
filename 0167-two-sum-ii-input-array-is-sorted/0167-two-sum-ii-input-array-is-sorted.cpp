class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;
        vector<int> vec;
        while( i < numbers.size() && j >= 0 ){
            if(numbers[i] + numbers[j] > target){
                j--;
            }
            else if(numbers[i] + numbers[j] < target){
                i++;
            }
            else{
                vec.push_back(i+1);
                vec.push_back(j+1);
                return vec;
            }
        }
        
                return vec;
    }
};