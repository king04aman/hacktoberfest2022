// Program written by : minhaj-313
import java.util.Scanner;
public class BMI_Calculator 
{
   public static void main(String args[]) 
   {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter your weight in kilogram: ");
      double weight = sc.nextDouble();
      System.out.print("\nEnter your height in meters: ");
      double height = sc.nextDouble();
      double BMI = weight / (height * height);
      System.out.print("\nThe Body Mass Index (BMI) is " + BMI + " kg/m2");
   }
}