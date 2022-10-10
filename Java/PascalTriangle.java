//Github username : abdul-sohail24

import java.util.ArrayList;
import java.util.List;

public class PascalTriangle
{
    public static void main(String[] args)
    {
        List<List<Integer>> ans = new ArrayList<>();
        ans = generate(5);
        System.out.println(ans);
    }

    public static List<List<Integer>> generate(int numRows)
    {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> row = new ArrayList<>();

        for(int i=0; i<numRows; i++)
        {
            row.add(0,1);
            for(int j=1; j<i; j++)
            {
                row.set(j, row.get(j) + row.get(j + 1));
            }
            result.add(new ArrayList<Integer>(row));
        }
        return result;
    }
}
