#TWO SUM SOLUTION FUNCTION USING VECTORS

class Solution {
public:
    int f=0,i,j;
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
                vector<int> v;
                int n= nums.size();
                for(int i=0;i<n;i++)
                {
                    
                        int diff = target - nums[i];
                        if(m.find(diff) != m.end())
                        {
                        auto p = m.find(diff);        
                        v.push_back(p->second);
                        v.push_back(i);
                        }
                        m.insert(make_pair(nums[i],i));
                }
          
          return v;
    }
};

