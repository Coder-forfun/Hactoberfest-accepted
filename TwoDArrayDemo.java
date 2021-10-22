import java.util.Scanner;

public class TwoDArrayDemo {
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
		
		
		Display(twodArray);
	}

}
