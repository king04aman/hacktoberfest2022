class Super{
    void show(){
        System.out.println("In Super");
    }
}

class Sub1 extends Super{
    void show(){
        System.out.println("In Sub1");
    }
}

class Sub2 extends Super{
    void show(){
        System.out.println("In Sub2");
    }
}

public class DynamicMethodDispaching {
    public static void main(String[] args) {
        Super ob=new Super();
        Sub1 ob1=new Sub1();
        Sub2 ob2=new Sub2();
        Super ref;
        ref=ob;
        ref.show();
        ref=ob1;
        ref.show();
        ref=ob2;
        ref.show();
    }
}
