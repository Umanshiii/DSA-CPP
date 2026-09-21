//https://leetcode.com/problems/rotate-array/?envType=problem-list-v2&envId=arzawg1s&

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k=k%(nums.size());
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            swap(nums[left],nums[right]);
            left+=1;
            right-=1;
        }
        left=0;
        right=k-1;
        while(left<right)
        {
            swap(nums[left],nums[right]);
            left+=1;
            right-=1;
        }
        left=k;
        right=nums.size()-1;
        while(left<right)
        {
            swap(nums[left],nums[right]);
            left+=1;
            right-=1;
        }
    }
};