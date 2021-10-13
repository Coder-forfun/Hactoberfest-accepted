import java.util.*;

public class NumbToWords
{
	public static void main(String[] args)  
        {  
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter Number: ");
            int n = sc.nextInt();
            System.out.println(ConvertIntoWords(n));  
        }
        
        static String ConvertIntoWords(int number)  
        {  
            if(number > 9999){
                return "invalid input";
            }
            if (number == 0) {
                return "zero"; 
            } 
            String words = "";  
            if ((number / 1000) > 0)  
            {  
                words += ConvertIntoWords(number / 1000) + " thousand ";  
                number %= 1000;  
            }  
            if ((number / 100) > 0)  
            {  
                words += ConvertIntoWords(number / 100) + " hundred ";  
                number %= 100;  
            }  
            if (number > 0)  
            {  
                String[] unitsMap = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };  
                String[] tensMap =  { "zero", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };  
                if (number < 20)  
                    words += unitsMap[number];  
                else  
                {  
                    words += tensMap[number / 10];  
                    if ((number % 10) > 0)  
                        words += " " + unitsMap[number % 10];  
                }  
            }  
            return words;  
        }  
}
