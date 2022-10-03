// Code by @gagan-gv

public class CountVowels {
    public static void main(String[] args) {
        String s = "Hello, World";

        int count = 0;

        for(int ii = 0; ii < s.length(); ii++) {
            if(s.charAt(ii) == 'a' || s.charAt(ii) == 'e' || s.charAt(ii) == 'i' || s.charAt(ii) == 'o' || s.charAt(ii) == 'u'){
                ++count;
            }
        }

        System.out.println(count);
    }
}