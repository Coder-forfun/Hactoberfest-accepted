
import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Adding First Number
        System.out.println("Enter the first number : ");
        int FisrtNumber = sc.nextInt();

        // Adding Operators
        System.out.println("Enter the operators : ");
        char Operators = sc.next().charAt(0);
        
        // Adding Second Number
        System.out.println("Enter the second number : ");
        int SecondNumber = sc.nextInt();

        // Adding Switch Statement For Calculation
        switch (Operators) {

            case '+':
                System.out.println("Result is : " + (FisrtNumber + SecondNumber));
                break;
            case '-':
                System.out.println("Result is : " + (FisrtNumber - SecondNumber));
                break;
            case '*':
                System.out.println("Result is : " + (FisrtNumber * SecondNumber));
                break;
            case '/':
                System.out.println("Result is : " + (FisrtNumber / SecondNumber));
                break;
            case '%':
                System.out.println("Result is : " + (FisrtNumber % SecondNumber));
                break;
            default:
                System.out.println("Please Enter a Valid Operator!!!");
        }

    }
}
