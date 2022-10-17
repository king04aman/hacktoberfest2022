import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
public class ArrayListExample {
	public static void main(String[] args) 
	{ 
		ArrayList<Integer> al2=new ArrayList<>();
		System.out.println("capcity "+al2.size());
		ArrayList<Integer> al1=new ArrayList<>(22);
		System.out.println("capcity "+al1.size());
		ArrayList<Integer> al=new ArrayList<>(Arrays.asList(1,2,3,4,5,6,7,8,9));
		al.add(9);
		al.add(1,90);
		al.add(3);
		al.remove(6);
		System.out.println(al.size());
		System.out.println(al);
		System.out.println(al);
		Iterator<Integer> itr=al.iterator();
		while(itr.hasNext())
		{
			System.out.println(itr.next());
		}
		System.out.println(al.contains(88));
		Object[] obj=al.toArray();
		System.out.println(Arrays.toString(obj));
		for(Object ch:obj)
		{
			System.out.println(ch);
		}
		System.out.println("getting Object    "+al.get(6));
		al.removeAll(al);
                                   System.out.println(al);
	}
}
