class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        if(n==0) return 0;
        int maxArea= 0;
        vector<int>right(n);
        vector<int>left(n);
        left[0] = -1;
        right[n-1] = n;
        for(int i=0;i<n;i++) {
            int prev = i-1;
            while(prev >= 0 && (heights[prev] >= heights[i])) {
                prev = left[prev];
            }
            left[i] = prev;
        }
        for(int i=n-2;i>=0;i--) {
            int prev = i+1;
            while(prev < n && (heights[prev] >= heights[i])) {
                prev = right[prev];
            }
            right[i] = prev;
        }
        for(int i=0;i<n;i++) {
            int width = right[i] - left[i] -1;
            maxArea = max(maxArea , heights[i] * width);
        }
        return maxArea;
    }
};
