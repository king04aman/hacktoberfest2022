#include<stdio.h>
int main()
{
    int d,m,y,dd,mm,yy,cdd,cmm,cyy,sm;
    printf("enter dob (dd mm yyyy)\n");
    scanf("%d%d%d",&dd,&mm,&yy);
    printf("enter current date (dd mm yyyy)\n");
    scanf("%d%d%d",&cdd,&cmm,&cyy);
    sm=cmm;
    if(cmm<mm)
    {
        y=(cyy-yy)-1;
        printf("y=%d\n",y);
        cmm=cmm+12;printf("cmm=%d\n",cmm);
    }
    else
    {
        y=cyy-yy;printf("y=%d\n",y);
    }
    if(cdd<dd)
    {
        m=(cmm-mm)-1;printf("m=%d\n",m);
        switch(sm)
        {
        case 1: case 3: case 5: case 7: case 8: case 10:case 12:
         {
        cdd=cdd+31;printf("cdd=%d\n",cdd);
        break;
         }
        case 4:case 6: case 9: case 11:
         {
        cdd=cdd+30;printf("cdd=%d\n",cdd);
        break;
         }
        case 2:
        cdd=cdd+28;printf("cdd=%d\n",cdd);
        break;
        default:
            printf("err\n\n\n");
            break;
        }
    }
    else
    {
        m=cmm-mm;printf("m=%d\n",m);
    }
    d=cdd-dd;
    printf("%d-%d-%d",d,m,y);
}
