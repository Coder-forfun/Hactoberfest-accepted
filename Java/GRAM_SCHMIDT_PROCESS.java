//CODE FOR GRAM-SCHMIDT PROCESS WRITTEN BY Deep_Jani
import java.util.Scanner;

public class gram_schmidt4 
{
	static int n;
	static int r;
	static double sp(double[] a,double[] b)
	{
		double p=0;
		for(int i=0;i<a.length;i++)
		{
			p=p+(a[i]*b[i]);
		}
		return p;
	}
	static double norm(double[] a)
	{
		double n=0;
		for(int i=0;i<a.length;i++)
		{
			n=n+(a[i]*a[i]);
		}
		return n;
	}
	public static void main(String[] args) 
	{
		//double[][] u={{1,1,1},{0,1,1},{0,0,1}};
		
		Scanner dj =new Scanner(System.in);

		System.out.println("Enter the dimension of co-ordinate space : ");
		r=dj.nextInt();

		System.out.println("Enter the number of elements in  the basis : ");
		n=dj.nextInt();
		
		double[][] u=new double[n][r];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<r;j++)
			{
				System.out.println("u"+i+1);
				u[i][j]=dj.nextDouble();
			}
		}
	
		double[][] v=new double[n][r];
		double[][] a=new double[n][r];
		
///////////////////////////////////////////////////////////////
		for(int i=0;i<r;i++)//V1=U1	
		{
			v[0][i]=u[0][i];
		}

		for(int k=1;k<n;k++)//REST
		{
			for(int i=k;i<k+1;i++)
			{
				for(int j=0;j<=i;j++)
				{
					a[i][j]=(sp(u[i],v[j])/norm(v[j]));
				}
			}
			for(int i=0;i<r;i++)
			{
				v[k][i]=u[k][i] ;
			}
			for(int j=0;j<k;j++)
			{
				for(int i=0;i<r;i++)
				{
					v[k][i]=v[k][i]- a[k][j]*v[j][i];
				}
			}
		}
////////////////////////////////////////////////////////////////////////////
		for(int i=0;i<n;i++)			
		{
			for(int j=0;j<r;j++)
			{
				System.out.print(v[i][j]+" ");
			}
			System.out.println("");
		}
////////////////////////////////////////////////////////////////////////////		
	}
}
