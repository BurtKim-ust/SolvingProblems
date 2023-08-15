class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int right = height.size()-1;
        int left = 0;
        while(right>left){
            int area= (right-left)*min(height[left],height[right]);
            maxArea=max(maxArea, area);
            if(height[right]>height[left]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};