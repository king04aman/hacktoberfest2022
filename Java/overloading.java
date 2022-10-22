class OverYuvi
{
    void sum(int a,int b)
    {
        System.out.println("Sum is: ");
        System.out.println(a+b);
    }

    void sum(float a,float b)
    {
        System.out.println("Sum is: ");
        System.out.println(a+b);
    }

    void sum(double a,double b)
    {
        System.out.println("Sum is: ");
        System.out.println(a+b);
    }
}

class OYuvi
{
    public static void main(String args[])
    {
        OverYuvi add = new OverYuvi();
        add.sum(5,15);
        add.sum(5.5,4.5);
        add.sum(5500,10000);
    }
}
