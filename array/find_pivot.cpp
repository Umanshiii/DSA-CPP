//https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int prefixsum=0;
        int arraysum=0;
        int n =nums.size();
        for(int i=0; i<n; i++)
        {
            arraysum+=nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if (prefixsum==arraysum-prefixsum-nums[i])
            {
                return i;
            }
            prefixsum+=nums[i];
        }
    return -1;
    }
};