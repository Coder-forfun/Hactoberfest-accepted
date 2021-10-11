import java.util.Scanner;
 
class Main
{
   public static void main(String args[])
   {
      String str1, rev = "";
      Scanner sc = new Scanner(System.in);
 
      System.out.println("Enter a string:");
      str1 = sc.nextLine();
      String str= str1.toLowerCase();
      int length = str.length();
 
      for ( int i = length - 1; i >= 0; i-- )
         rev = rev + str.charAt(i);
 
      if (str.equals(rev))
         System.out.println(str1+" is a palindrome");
      else
         System.out.println(str1+" is not a palindrome");
 
   }
}
