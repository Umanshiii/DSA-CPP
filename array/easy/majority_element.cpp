//https://leetcode.com/problems/majority-element/

//Hash map

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> output;
        int n=nums.size();      
        for(int i=0; i<n; i++)
        {
            output[nums[i]]++;
        }
        for(auto x:output)
        {
            if(x.second>n/2)
            {
                return x.first;
            }
        }
        return 0;
    }
};

// Boyer–Moore Majority Vote Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int output=0;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if (count==0)
            {
                output=nums[i];
            }
            if (nums[i]==output)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return output;
    }
};