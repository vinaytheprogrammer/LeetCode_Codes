class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows - 1 >= 0){
            vector<int> v;
            v.push_back(1);
            ans.push_back(v);
        }
        if(numRows - 2 >= 0){
            vector<int> v;
            v.push_back(1);
            v.push_back(1);
            ans.push_back(v);
        }
        for(int i=0;i<numRows - 2;i++){
            vector<int> temp = ans[ans.size() - 1];
            vector<int> take;
            take.push_back(1);
            for(int j = 0; j < temp.size() -1;j++ ){
                take.push_back(temp[j] + temp[j+1]);
            }
            take.push_back(1);
            ans.push_back(take);
        }
        return ans;
    }
};