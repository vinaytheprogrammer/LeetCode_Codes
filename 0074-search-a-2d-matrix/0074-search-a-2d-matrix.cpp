class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int start = 0;
        int end = rows*cols -1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            int row = mid / cols;
            int col = mid % cols;
            if(matrix[row][col] == target){
                return 1;
            }
            else if(matrix[row][col] < target){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return 0;
    }
};