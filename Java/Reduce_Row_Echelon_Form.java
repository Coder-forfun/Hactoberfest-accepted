//REDUCE ROW ECHELON FORM CODE WRITTEN BY Deep_Jani
//REDUCE ROW ECHELON FORM CODE WRITTEN BY Deep_Jani

import java.util.Scanner;

public class Reduce_row_echelon_form2 
{
	public static double[][] rref(double[][] m,int x,int y)
	{
	    double[][] rref = new double[x][y];
	    int flag;
	    double temp2;

	    //LOOP FOR COPYING MATRIX
	    for (int r = 0; r < x; r++)
	    {
	        for (int c = 0; c < y; c++)
	        {
	            rref[r][c] = m[r][c];
	        }
	    }
	    //LOOP FOR ZERO ROWS TO BOTTOM
	    for (int r = 0; r < x-1; r++)
	    {
	    	flag=0;
	        for (int c = 0; c < y; c++)
	        {
	            if(rref[r][c]==0) {flag++;}
	        }
	        if(flag==y)
            {
        		for(int j = 0; j < y; j++) 
        		{
        			temp2=rref[r][j];
        			rref[r][j]=rref[r+1][j];
        			rref[r+1][j]=temp2;
       			}
            }
	    }

	    for (int p = 0; p < x; p++)
	    {
	    	//FOR GETTING PIVOT
	    	if(p >= y)break;
	        double pv = rref[p][p];
	        if (pv != 0)
	        {
	            for (int i = 0; i < y; i++)
	            {
	                rref[p][i] = rref[p][i] / pv;
	            }
	        }
	        //FOR MAKING ZEROES UNDER PIVOT
	        for (int r = 0; r < x; r++)
	        {
	            if (r != p)

	            {
	                double temp = rref[r][p];
	                for (int i = 0; i < y; i++)
	                {
	                    rref[r][i] = rref[r][i] - temp * rref[p][i];
	                }
	            }
	        }
	    }
	    return rref;
	}
	public static void main(String[] args)
	{
		Scanner dj  = new Scanner(System.in);
		System.out.println("ENTER THE NO. OF ROWS : ");
		int m = dj.nextInt();
		System.out.println("ENTER THE NO. OF COLUMNS : ");
		int n = dj.nextInt();
		double[][] a = new double[m][n];
		System.out.println("ENTER THE ELEMENTS of ARRAY : ");
		for(int i = 0; i < m; i++) 
		{
			for(int j = 0; j < n; j++) 
			{
				a[i][j] = dj.nextDouble();
			}
		}
		double[][] b = new double[m][n];

		b = rref(a,m,n);
		b = rref(b,m,n);

		for(int i = 0; i < m; i++) 
		{
			for(int j = 0; j < n; j++) 
			{
				System.out.printf(a[i][j]+"    " );
			}
			System.out.println("/n");
		}
		System.out.println("/n");
		System.out.println("/n");
		System.out.println("/n");
		System.out.println("/n");
		for(int i = 0; i < m; i++) 
		{
			for(int j = 0; j < n; j++) 
			{
				System.out.printf(b[i][j]+"    " );
			}
			System.out.println("/n");
		}
	}
}
