import java.util.Scanner;

public class TheStateOfWakanda1 {
	
	public static void Display(int [][] a)
	{
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[0].length; j++) {
				
				System.out.print(a[i][j]+" "); 
				
			}
			System.out.println();
		}
	}
	
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int row = scn.nextInt();
		int coloumn = scn.nextInt();
		
		int [][] twodArray = new int[row][coloumn]; 
		
		for (int i = 0; i < twodArray.length; i++) {
			for (int j = 0; j < twodArray[0].length; j++) {
				
				twodArray[i][j] = scn.nextInt(); 
				
			}
		}
		
		for(int j = 0; j<twodArray[0].length;j++)
		{
			if(j % 2 == 0)
			{
				for (int i = 0; i < twodArray.length; i++)
				{
					System.out.println(twodArray[i][j]);
				}
			}
			else
			{
				for (int i = twodArray.length-1; i >=0; i--)
				{
					System.out.println(twodArray[i][j]);
				}
			}
		}
		
		
	}

}
