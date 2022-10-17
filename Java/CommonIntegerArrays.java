import java.util.Arrays;
public class CommonIntegersArrays {
	public static void main(String[] args) {
	int[] arr1 = {4,7,3,9,2,7,9,5,2};
                  int[] arr2 = {3,2,12,9,40,32,4};
	commonIntegers(arr1,arr2);
	}
    public static void commonIntegers(int []arr1,int []arr2)
    {
    	Arrays.sort(arr1);
    	System.out.println(Arrays.toString(arr1));
    	Arrays.sort(arr2);
    	System.out.println(Arrays.toString(arr2));
            for(int i=0;i<arr1.length;i++){
                for(int j=0;j<arr2.length;j++){
                    if(arr1[i]==arr2[j]){
                        System.out.print(arr1[i]+" ");
                    }
                }
            }
        }
}
