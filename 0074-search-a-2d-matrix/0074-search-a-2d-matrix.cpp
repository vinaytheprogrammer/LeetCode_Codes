class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int s = 0, e = rows * cols - 1;
        
        while(s <= e)
        {
            int mid = s + (e - s)/2;
            int row = mid / cols;
            int col = mid % cols;
            
            if(matrix[row][col] == target)
                return 1;
            else if(matrix[row][col] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return 0;
    }
};