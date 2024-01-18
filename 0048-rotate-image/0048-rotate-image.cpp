class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // 1. Swap respect to main Diagonal
        //2. reverse each row
        // 3. remember that's all going in place
        
    int n = matrix.size();

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    }
};