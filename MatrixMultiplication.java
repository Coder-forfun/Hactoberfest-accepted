import java.util.Scanner;

public class MatrixMultiplication {
	
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
		
		int r1 = scn.nextInt();
		int c1 = scn.nextInt();
		
		int [][] oneArray = new int[r1][c1]; 
		
		for (int i = 0; i < oneArray.length; i++) {
			for (int j = 0; j < oneArray[0].length; j++) {
				
				oneArray[i][j] = scn.nextInt(); 
				
			}
		}
		
		int r2 = scn.nextInt();
		int c2 = scn.nextInt();
		
		int [][] twoArray = new int[r2][c2]; 
		
		for (int i = 0; i < twoArray.length; i++) {
			for (int j = 0; j < twoArray[0].length; j++) {
				
				twoArray[i][j] = scn.nextInt(); 
				
			}
		}
		
		if(c1 != r2)
		{
			System.out.println("Invalid input");
			return;
		}
		
		int [][] prdArray = new int[r1][c2]; 
		
		for (int i = 0; i < prdArray.length; i++) {
			for (int j = 0; j < prdArray[0].length; j++) {
				
				for(int k = 0; k<c1 ; k++)
				{
					prdArray[i][j] = prdArray[i][j] + oneArray[i][k] * twoArray[k][j];
				}
				
			}
		}
		
		Display(prdArray);
	
}

}
