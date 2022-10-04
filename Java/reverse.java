//A program to get the reverse of a given string

public class reverse

{public static void main(String[] args) {
    
    String string = "You are awesome";
    String reversestring = "";  //Stores the reverse value

    for(int i = string.length()-1; i >= 0; i--){
        reversestring = reversestring + string.charAt(i);

    }
    //displays input
    System.out.println("Given string is, " + string);
    //displays output
    System.out.println("Reverse of the given string is, " + reversestring);
}
}
