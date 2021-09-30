import java.util.Scanner;

public class addition {
    public static void main(String[] args) {
        System.out.println("Enter two numbers");
        Scanner inp=new Scanner(System.in);
        int a=inp.nextInt();
        int b=inp.nextInt();
        System.out.println("Addition of integers is: "+(a+b));
    }
}
