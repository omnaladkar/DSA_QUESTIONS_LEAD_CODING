/*
Given an array of integers heights representing the histogram's bar 
height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        sort(heights.begin(),heights.end());
        
        vector<int> area;
        for(int i=0;i<heights.size();i++){
            area[i]=n*heights[i];
        n--;
        }
         sort(area.begin(),area.end());
             
             return area[n-1];
        
    }
};
