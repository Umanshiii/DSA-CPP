// https://leetcode.com/problems/valid-palindrome/submissions/2148039701/

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int n=s.size();
        int left=0;
        int right=n-1;
        while(left<right) 
        {
            if (not isalnum(s[left]) || s[left]==' ')
            {
                left=left+1;
                continue;
            }
            if (not isalnum(s[right]) || s[right]==' ')
            {
                right=right-1;
                continue;
            }
            if (tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            else
            {
                right=right-1;
                left=left+1;
            }
            
        } 
    return true;
    }
};