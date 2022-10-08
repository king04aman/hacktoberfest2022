class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int a = -1;
        while(i<=j)
        {
            int h = min(height[i],height[j]);
            int w = j-i;
            int area = w*h;
            if(area>a)
            {
                a=area;
            }
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return a;
    }
};
