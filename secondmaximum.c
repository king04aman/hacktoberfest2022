#include <stdio.h>
void main()
{
  int arr1[10],i,j=0,lrg,lrgtwo;

       printf("Input elements in the array :\n");
       for(i=0;i<10;i++)
            {

	      scanf("%d",&arr1[i]);
	    }

   lrg=0;
  for(i=0;i<10;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
  }
  lrgtwo=0;
  for(i=0;i<10;i++)
  {
     if(i==j)
     {
          i++;
		  i--;
     }
     else
     {
          if(lrgtwo<arr1[i])
	     {
               lrgtwo=arr1[i];
          }
      }
  }

  printf("The Second largest element in the array is :  %d \n\n", lrgtwo);
}
