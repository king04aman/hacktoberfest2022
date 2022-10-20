#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int m=n;
    int arr[2*n-1][2*n-1];

    int i=0;
    int j=0;
    int x=0;
    int p=0;
    int q=2*n-2;
    int y=2*n-2;

    while(n>0)
    {
        for(i=p;i<y;i++)
        arr[x][i]=n;

        for(i=x;i<q;i++)
        arr[i][y]=n;

        for(i=y;i>=p;i--)
        arr[q][i]=n;

        for(i=y;i>=x;i--)
        arr[i][p]=n;
        
        x++;
        p++;
        y--;
        q--;
        n--;
    }
    

    for(i=0;i<2*m-1;i++)
    {
        for(j=0;j<2*m-1;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
