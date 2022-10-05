vector<vector<int>> solve(vector<vector<int>> a){
    int i,j;
    map<int,bool> r,c;
    int m=a.size(),n=a[0].size();
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]==0){
                r.insert(pair<int,bool>(i,true));
                c.insert(pair<int,bool>(j,true));
            }
    for(i=0;i<m;i++)
        if(r.find(i)!=r.end())
            for(j=0;j<n;j++)
                a[i][j]=0;
    for(j=0;j<n;j++)
        if(c.find(j)!=c.end())
            for(i=0;i<m;i++)
                a[i][j]=0;
    return a;
}
