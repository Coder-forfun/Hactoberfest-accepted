import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int v = 1;
        for(int i = 1; i<=n; i++){

            int val = v;

            for (int j = 1; j<=n; j++){

                if(i == 1)                  System.out.print(val+"\t"); // first line

                else if(i < n){                                         // middle block only print value in 1st and last col

                    if(j == 1 || j == n)    System.out.print(val+"\t");
                    else                    System.out.print("*\t");
                }

                else                        System.out.print(val+"\t"); // last line

                val ++;
            }
            // changing the value of v for different cases
            if(n % 2 == 0){                 // if n is even

                if(i < n/2)                 v = v + 2*n;
                else if (i == n/2)          v = v + n;
                else                        v = v - 2*n;
            }
            if(n % 2 != 0){                 // if n is odd
                
                if(i < n/2 + 1)             v = v + 2*n;
                else if (i == n/2 + 1)      v = v - n;
                else                        v = v - 2*n;
            }

            System.out.println();
        }   
    }
}
