
public class AmicableNumbers {
    public static void main(String[] args) {

        System.out.println(isAmicable(220,284));

    }

    static  boolean isAmicable(int a

             , int b){
        if (a == factors2(b) && b == factors2(a)){
            return true;
        }
        return false;
    }

    static int factors2(int n) {
        int sum = 0;
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                if (n / i == n) {
                    sum = sum + 1;
                }else if (n / i == i) {
                    sum = sum + i;
                }else {
                    sum = sum + i + n/ i;
                }
            }
        }
        return sum;
    }
}
