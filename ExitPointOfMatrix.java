import java.util.Scanner;

public class ExitPointOfMatrix {
	
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
		
		int [][] matrix = new int[row][coloumn]; 
		
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[0].length; j++) {
				
				matrix[i][j] = scn.nextInt(); 
				
			}
		}
		
//		Display(matrix);
		
		int i = 0 , j = 0 , dir = 0;
		
		
		while(true)
		{
			
			dir = (dir + matrix[i][j]) % 4;
			
			if(dir == 0)
			{
				j++;
			}
			else if(dir == 1)
			{
				i++;
			}
			else if(dir == 2)
			{
				j--;
			}
			else if(dir == 3)
			{
				i--;
			}
			
			if(i < 0)
			{
				i++;
				break;
			}
			else if(j < 0)
			{
				j++;
				break;
			}
			else if(i == matrix.length)
			{
				i--;
				break;
			}
			else if(j == matrix[0].length)
			{
				j--;
				break;
			}
			
		}
		
		System.out.println(i);
		System.out.println(j);
		
	}

}
