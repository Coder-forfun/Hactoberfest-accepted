/*
Question : 
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Link : https://leetcode.com/problems/trapping-rain-water/
*/

// Code : 


#include<algorithm>
class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if(len <=2) return 0;
        
        vector<int> left(len,0);
        vector<int> right(len,0);
        
        left[0] = height[0];
        right[len-1] = height[len-1];
        
        for(int i=1; i<len; i++){
            left[i] = max(left[i-1], height[i]);
        }
        
        for(int i=len-2; i>=0; i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        int water = 0;
        for(int i=0; i<len; i++){
            water += min(left[i], right[i]) - height[i];
        }
        return water;
    }
};
