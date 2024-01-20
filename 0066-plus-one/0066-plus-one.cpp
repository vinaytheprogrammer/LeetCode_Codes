class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum =0 ,carry =0;
        vector<int> v;
        vector<int> add(digits.size(),0);
        add.pop_back();
        add.push_back(1);
        
        for(int i=digits.size()-1;i>=0;i--){
            sum = (digits[i]+add[i]+carry)%10;
            carry = (digits[i]+add[i]+carry)/10;
            v.push_back(sum);
        }
        if(carry != 0)
            v.push_back(carry);
        reverse(v.begin(),v.end());
        return v;
    }
};