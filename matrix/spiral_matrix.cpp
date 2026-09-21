//https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int top = 0;
        int left = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int right = m - 1;
        int bottom = n - 1;
        vector<int> v;
        
        while (top <= bottom && left <= right) 
        {    
            // 1. Traverse top row from left to right
            for (int i = left; i <= right; i++) {
                v.push_back(matrix[top][i]);
            }
            top++;
            
            // 2. Traverse right column from top to bottom
            for (int i = top; i <= bottom; i++) {
                v.push_back(matrix[i][right]);
            }  
            right--;
            
            // 3. Traverse bottom row from right to left (only if rows remain)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            // 4. Traverse left column from bottom to top (only if columns remain)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }  
        return v;
    }
};