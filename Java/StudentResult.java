import java.util.Scanner;

public class StudentResult {
    public static void main(String[] args) {
        Scanner Result = new Scanner(System.in);

        System.out.print("Enter Your Marks : ");

        int Marks = Result.nextInt();

        if(Marks>= 33){
            System.out.println("You are Pass");
        }
         else{
            System.out.println("You are Fail");
        }
    }
}
