class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int weight=j-i;
            int area=weight*h;
            maxwater=max(maxwater,area);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxwater;
    }
};