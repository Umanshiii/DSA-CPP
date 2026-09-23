//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        map <int,int> freq;
        for(int i=0; i<n; i++)
        {
            int rem=target-nums[i];
            if(freq.find(rem)!=freq.end())
            {
                int j=freq[rem];
                return {j,i};
            }
            freq[nums[i]]=i;
        }
        
    return {};
    }
};