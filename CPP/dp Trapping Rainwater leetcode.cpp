class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
        vector<int> mxl(n);// maximum height to the left
        mxl[0]=height[0];
       //mxl.push_back(height[0]);
        for(int i=1;i<n;i++)
        {
            int mx = max(mxl[i-1], height[i]);
            mxl[i] = mx;
        }
        
        int mxr[n];
         mxr[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            int nx=max(height[i],mxr[i+1]);
            mxr[i]=nx;
        }
        int sum=0;
        for(int i=1;i< n-1;i++)
        {
            sum+=max(min(mxr[i],mxl[i])-height[i], 0);
        }
        return sum;
    }
};
