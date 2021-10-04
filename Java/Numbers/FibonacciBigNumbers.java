//This program uses "BigInteger" to get Fibonacci numbers bigger than 64bit limit (the only limit is your RAM capacity)
import java.util.*;
import java.math.*;
public class Fibonacci_Numbeers_V2_NO_ARRAY
{
    static Scanner reader = new Scanner(System.in);

    public static void main (  String[] args)
    {
        //long[] Fibonacci=new long[100];
        BigInteger FibonacciN_1 =  BigInteger.ONE;
        BigInteger FibonacciN_2 =  BigInteger.ONE;
        BigInteger FibonacciN;
        int count =1;
        for(int i=1;i<YOUR_NUMBER;i++)  //change "YOUR_NUMBER" to get a log of all Fibonacci Numbers until n position
        {
            FibonaciN=FibonaciN_1.add(FibonaciN_2);
            FibonacciN_1=FibonacciN_2;
            FibonacciN_2=FibonacciN;
            System.out.println("Fibonacci number"+count+": "+ FibonacciN);
            count++;
        }
    }

}
