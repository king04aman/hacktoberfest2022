// Write a program to swap the values of two variables.



public class swap {

	public static void main(String[] args) {
		int w, g;
		w = 10;
		g = 5;
		System.out.println("original " + w + " " + g);
		w = w + g;
		g = w - g;
		w = w - g;
		System.out.print("Swapped " + w + " " + g);

	}

}
