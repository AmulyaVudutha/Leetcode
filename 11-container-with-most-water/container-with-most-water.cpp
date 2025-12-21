class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int maxi=INT_MIN;
        int Area;
        while(left<right)
        {
            Area=(right-left) * min(height[left],height[right]);
            if(Area>maxi)
            maxi=Area;
            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxi;
    }
};