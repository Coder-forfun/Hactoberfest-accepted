// need to import scanner class from util package
import java.util.Scanner;
class Sub
{
public static void main(String[] arg)
{
int a,b,c;
Scanner s=new Scanner(System.in);
System.out.println("Enter first number");
a=s.nextInt();
// need to close scanner object
s.close();
System.out.println("Enter second number");
b=s.nextInt();
// need to close scanner object
s.close();
if(a>b)
	c=a-b;
else
	c=b-a;
System.out.println("Subtraction of two numbers is : "+c);
}
}
