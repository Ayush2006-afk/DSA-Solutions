class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int start=0,end=n-1;
        int maxWater=0;
        while(start<end){
            int width=end-start;
            int ht=min(height[start],height[end]);
            int area=width*ht;
            maxWater=max(maxWater,area);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxWater;
    }
};