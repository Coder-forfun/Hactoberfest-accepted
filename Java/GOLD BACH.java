/*Goldbach Number
A positive and even number is called a Goldbach number if the number can be expressed as the sum of two odd prime numbers. Note that all even integers greater than 4 are Goldbach numbers.*/


import java.io.*;
 class Goldbach
 {
      boolean prime(int m)
      {
          int c=0;
          for(int i=1;i<=m;i++)
          {
              if(m%i==0)
              c++;  
          }
          if(c==2)
          return(true);
          else
          return(false);
       }
      public static void main(String args[])throws IOException
        {
            BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
            System.out.print("N=");
            int n=Integer.parseInt(br.readLine());
            System.out.println();
            Goldbach ob=new Goldbach();
            if (n%2!=0)
            
                System.out.println("INVALID INPUT. NUMBER IS ODD");
            
            else if(n<=9||n>=50)
            
                System.out.println("INVALID INPUT.NUMBER OUT OF RANGE.");
            
            else
            {
                System.out.println("PRIME PAIRS ARE:");
                for(int i=1;i<=n/2;i++)
                {
                    if(ob.prime(i))
                    
                    { 
                        if(ob.prime(n-i))
                        System.out.println(i+","+(n-i));
                    }
                }
            }
        }
    }      
