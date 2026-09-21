//https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int top=0;
        int left=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int right=m-1;
        int bottom=n-1;
        vector<int>v;
        int count=0;
        int total=n*m;
        while(count<total)
        {    for(int i=left; i<=right; i++)
            {
                v.push_back(matrix[top][i]);
                count+=1;
            }
            if(count==total)
            {
                break;
            }
            top+=1;
            for(int i=top; i<=bottom; i++)
            {
                v.push_back(matrix[i][right]);
                count+=1;
            }  
            right-=1;
            for(int i=right; i>=left; i--) 
            {
                v.push_back(matrix[bottom][i]);
                count+=1;
            }
            bottom-=1;
            for(int i=bottom; i>=top; i--)
            {
                v.push_back(matrix[i][left]);
                count+=1;
            }
            left+=1;
        }  
        return v;
    }
};