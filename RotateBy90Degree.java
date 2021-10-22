import java.util.Scanner;

public class RotateBy90Degree {
	
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
		
		int size = scn.nextInt();

		
		int [][] image = new int[size][size]; 
		
		for (int i = 0; i < image.length; i++) {
			for (int j = 0; j < image[0].length; j++) {
				
				image[i][j] = scn.nextInt(); 
				
			}
		}
		
//		Display(image);
		
		
		// Transpose Of A Image
				
		for (int i = 0; i < image.length; i++) {
			for (int j = i; j < image[0].length; j++) {
				
				int temp = image[i][j];
				image[i][j] = image[j][i];
				image[j][i] = temp;
				
			}
		}
		
//		System.out.println();
//		Display(image);
		
		for (int i = 0; i < image.length; i++) {
			
			int li = 0;
			int ri = image.length-1;
			
			while(li < ri)
			{
				int temp = image[i][li];
				image[i][li] = image[i][ri];
				image[i][ri] = temp;
				
				li++;
				ri--;
			}
		}
//		System.out.println();
//		Display(image);
	}

}

