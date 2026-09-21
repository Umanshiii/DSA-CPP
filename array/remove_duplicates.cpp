//https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=arzawg1s&

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        if (nums.empty())
        {
            return 0;
        }
        int k=1;
        for(int i=1; i<n; i++)
          {
            if(nums[i]!=nums[i-1])
            {
                nums[k]=nums[i];
                k++;
            }
          }
        return k;
    }
};

//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=problem-list-v2&envId=arzawg1s&

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        if (n<=2)
        {
            return n;
        }
        int k=2;
        for(int i=2; i<n; i++)
          {
            if(nums[i]!=nums[k-2])
            {
                nums[k]=nums[i];
                k++;
            }
          }
        return k;
    }
};