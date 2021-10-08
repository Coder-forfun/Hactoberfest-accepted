import java.util.Scanner;

public class addition {
    public static void main(String[] args) {
        System.out.println("Enter two numbers");
        Scanner inp=new Scanner(System.in);
        int a=inp.nextInt();
        // need to close Scanner class
        inp.close();
        int b=inp.nextInt();
        // need to close Scanner class
        inp.close();
        System.out.println("Addition of integers is: "+(a+b));
    }
}
