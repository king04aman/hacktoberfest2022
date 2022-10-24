//Given the num of rows numRows, generate the first numRows of Pascal's Triangle.
import java.util.ArrayList;
import java.util.Scanner;

public class PascalTriangle {

    static ArrayList<ArrayList<Integer>> generate(int numRows){
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        if(numRows==0)
        {
            return result;
        }

        ArrayList<Integer> pre = new ArrayList<>();
        pre.add(1);
        result.add(pre);
        for(int i=1;i<=numRows-1;i++)
        {
            ArrayList<Integer> cur = new ArrayList<>();
            cur.add(1); //first
            for(int j=0;j<pre.size()-1;j++)
            {
                cur.add(pre.get(j) + pre.get(j+1)); //middle
            }
            cur.add(1); //last
            result.add(cur);
            pre=cur;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Program to print the pascal triangle, given the no of rows!!");
        System.out.print("Enter number of rows: ");
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> list = generate(n);
        for(ArrayList<Integer> temp : list)
        {
            System.out.println(temp);
        }
    }
}
