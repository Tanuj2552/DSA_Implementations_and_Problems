#include <bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int w = height.size() - 1;
        int l = 0, r = w;
        int max_area = 0;
        int curr_area = 0;
        while(l!=r){
            curr_area = min(height[l],height[r])*w;
            max_area = max_area > curr_area? max_area:curr_area;
            if(height[l] > height[r]){
                r--;
            }
            else{
                l++;
            }
            w--;
        }
        
    return max_area;
    }
};
