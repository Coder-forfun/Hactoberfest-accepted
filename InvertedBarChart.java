
import java.util.Scanner;

public class InvertedBarChart {
	
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int tc = scn.nextInt();
		
		int arr[] = new int[tc];
		
		
		int max = Integer.MIN_VALUE;
		for (int i = 0; i < arr.length; i++) {
			arr[i] = scn.nextInt();
			 if(arr[i]>max)
			 {
				 max = arr[i];
			 }
		}	
		
		for(int floor = 1 ; floor<=max ; floor++)
		{
			for(int i = 0 ; i<arr.length ; i++)
			{
				
				if(arr[i]>=floor)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("\t");
				}
				
			}
			System.out.println();
		}
		
	}

}
