import java.util.Scanner;
public class Main
{
  public static void main(String[] args)
  {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter number of Terms : ");
  int N=sc.nextInt();
  series(N);
  }
 
  static void series(int num)
  {
  System.out.println("Fibonacci series is : ");
  int n1=0,n2=1,n3;
  for(int c=0;c<num;c++)
  {
      n3 = n1+n2;
      n1 = n2;
      n2 = n3;
  System.out.printf("%d ",n3);
  }
  }
}
