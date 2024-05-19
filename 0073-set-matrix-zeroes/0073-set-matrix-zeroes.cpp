class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0; j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    v.push_back({i,j});
                }
            }
        }
        
        for(int k =0;k<v.size();k++){
            int r = v[k].first;            
            int c = v[k].second;
            
            for(int i=0;i<matrix.size();i++){
             for(int j=0; j<matrix[i].size();j++){
                if( r == i){
                    matrix[i][j] = 0;
                }
                if( c == j){
                    matrix[i][j] = 0;
                }
             }
            }
        }
    }
};