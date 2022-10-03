import java.util.Scanner;

public class TaxCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int income = sc.nextInt();
        int tax;

        //Tax in less than 5 lakh
        if(income < 500000 ){
            tax = income * 0;
            //System.out.println(tax);
        }

        //Tax in more then 5 lakh and less then 10 lakh
        else if ( income >= 500000 && income < 1000000){
            tax = (int) (income * 0.2);
            //System.out.println(tax);
        }

        // tax in 10 lakh above
        else {
            tax =(int) (income * 0.3);
            //System.out.println(tax);
        }
        System.out.println("Your Tax is " + tax);
    }
}
