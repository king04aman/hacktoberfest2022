class Solution {
public:
int ans=0;
void help(int a , int b , vector<vector<int>>grid , int n )
{
    if(a<0 or a>=grid.size() or b<0 or b>=grid[0].size() or grid[a][b]==-1 or grid[a][b]==-2) return ;
    if(grid[a][b]==2)
    {
        if(n==0) 
            ans++;
        return ;
    }
    grid[a][b]=-1;
    help(a-1 , b , grid , n-1);
    help(a+1 , b , grid , n-1);
    help(a , b+1 , grid , n-1);
    help(a , b-1 , grid , n-1);
    grid[a][b]=0;

}
    int uniquePathsIII(vector<vector<int>>& grid) {
int a , b;
int n=1;
for(int i=0  ;i<grid.size() ; i++)
{
    for(int j=0 ; j<grid[i].size() ; j++)
    {
        if(grid[i][j]==1)
        {
            a=i;
            b=j;
        }
        else if(grid[i][j]==0) n++;
    }
}
help(a , b , grid , n);
return ans;
    }
};