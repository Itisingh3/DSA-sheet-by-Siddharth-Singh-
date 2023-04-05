class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1,maxarea=INT_MIN;
        while(i<j){
            int area=min(height[i],height[j])*(j-i);
            maxarea=area>maxarea?area:maxarea;
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxarea;
        
    }
};
