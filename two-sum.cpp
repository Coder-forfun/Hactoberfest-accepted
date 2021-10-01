#TWO SUM SOLUTION FUNCTION USING VECTORS

class Solution {
public:
    int f=0,i,j;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                v.push_back(i);
                v.push_back(j);
                break;
            }
        }
        return v;
    }
};

