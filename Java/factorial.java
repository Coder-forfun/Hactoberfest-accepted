import java.util.Scanner;
public class Main
{
  public static void main(String[] args)
  {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter number : ");
  int N=sc.nextInt();
  int F = factorial(N);
  System.out.printf("Factorial of %d is %d",N,F);
  }
 
  static int factorial(int num)
  {
  if(num==1)
  {
    return 1;
  }
  else{
    return num * factorial(num-1);
  }
  }
}
