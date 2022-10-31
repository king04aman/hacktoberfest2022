#include <stdio.h>
int main()
{
    //variables
    int choose;
    int i=1,bjp=0,con=0,aap=0,sjp=0,a;
    // are declared here.
    printf("*************WELCOME TO SIMPLE VOTING SYSTEM**************** \n");

    printf("\t    -------MLA ELECTIONS-------\n");
    
    printf("Press 1 to cast vote\n");
    
    scanf("%d",&a);
if(a==1){
    while(i>0)
{
    printf("*************************Choose One to Vote*****************************\n");
    printf ("          1.BJP          |         2.Congress      \n");
    printf("          3.AAP          |         4.Samajvadi Party ");
    printf("\n******************************************************\n");
    printf("\n*********************5.View Results***********************************\n");
   
scanf("%d",&choose);


    //loop 1

if(choose==1)
{
bjp+=1;}
else if(choose==2)
{con+=1;}
else if(choose==3)
{aap+=1;}
else if(choose==4)
{sjp+=1;}
else if(choose==5)
{
    break;
}
else
printf("Enter Appropriate Number");
}
    printf("BJP= %d\n",bjp);
    printf("Congress= %d\n",con);
    printf("AAP= %d\n",aap);
    printf("Samajvadi Party= %d\n",sjp);
    i++;
}
  //loop1 ends

else if(a==2)
{
    printf(" BJP= %d\n",bjp);
    printf("Congress= %d\n",con);
    printf("AAP= %d\n",aap);
    printf("Samajvadi Party= %d\n",sjp);
    
    
}

if(bjp>con && bjp>aap && bjp>sjp)
{
printf("The Winner is BJP");
}
else if(con>bjp && con>aap && con>sjp)
{
printf("The Winner is Congress");
}
else if(aap>bjp && aap>con && aap>sjp)
{
printf("The Winner is AAM AADMI PARTY ");
}
else if (sjp>bjp && sjp>con && sjp>aap)
{
printf("The Winner is SAMAJWADI PARTY");
}

return 0;

}