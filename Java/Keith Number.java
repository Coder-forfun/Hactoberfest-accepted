import java.util.*;
class Keith
{
    public static void main(String args[])
    {
        Scanner I=new Scanner(System.in);
        int n,m,i,j,c=0;
        System.out.println("Enter a no.");
        m=n=I.nextInt();
        c=Integer.toString(m).length();
        int a[]=new int[c];
        j=c-1;
        for(i=0;i<c;i++,m/=10)
         a[i]=m%10;
        while(m<n)
        {
           m=0;
           for(i=0;i<c;i++)
              m=m+a[i]; 
           if(j==-1)
               j=c-1;
           a[j--] = m;
        }
        if (m == n) 
            System.out.println("KEITH NUMBER");
        else
            System.out.println("NOT A KEITH NUBER");
    }     
} 
