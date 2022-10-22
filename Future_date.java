import java.util.*;
public class Future_date 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String mon[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        System.out.println("Enter date , month and year");
        int dd = sc.nextInt();
        int mm = sc.nextInt();
        int yy = sc.nextInt();
        System.out.println("After how many days?");
        int c = sc.nextInt();
        if(yy%4==0)
        days[1]=29;
          if(dd>=1 && dd<=31 && mm>=1 && mm<=12 && yy>1000)
         {
            if(dd<=days[mm-1])
            {
                System.out.println(dd+" "+mon[mm-1]+" "+yy+" IS THE CURRENT DATE");
                System.out.println("AFTER "+c+" DAYS...");
            while(c!=0)
            {
                dd+=1;
                if(dd>days[mm-1])
                {
                    dd=1;
                    if(mm==12)
                    {
                        mm=1;
                        yy+=1;
                        if(yy%4==0)
                        days[1]=29;
                    }
                    else
                    mm+=1;
                }
                c--;
            }
            System.out.println(dd+" "+mon[mm-1]+" "+yy+" IS THE FUTURE DATE");
           }
           else
           System.out.println(dd+" "+mon[mm-1]+" "+yy+" IS AN INVALID DATE");
         }   
        else
         System.out.println(dd+" "+mon[mm-1]+" "+yy+" IS AN INVALID DATE");
    }
}
