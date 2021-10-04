// Sparsh Bhardwaj
// Country - India
// Function to add two Integer Number using Function in Java
// Hactoberfest

public class Main{
  
  public static int add(int a, int b){
    int c = a + b;
    return c;
  }
  
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in)
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = addnum(a,b);
    System.out.println(c);
    }
}
