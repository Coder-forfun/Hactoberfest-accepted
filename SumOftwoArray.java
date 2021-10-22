import java.util.Scanner;

public class SumOftwoArray {
	
	private static void Display(int arr[])
	{
		for (int val : arr) {
			
			System.out.println(val);
			 
		}	
	}
	
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int tcOne = scn.nextInt();
		
		int arrOne[] = new int[tcOne];
	
		for (int i = 0; i < arrOne.length; i++) {
			
			arrOne[i] = scn.nextInt();
			 
		}	
		
		int tcTwo = scn.nextInt();
		
		int arrTwo[] = new int[tcTwo];
	
		for (int i = 0; i < arrTwo.length; i++) {
			
			arrTwo[i] = scn.nextInt();
			 
		}	
	
		
	
		
		int arrSum[] = new int[tcOne>tcTwo?tcOne : tcTwo ];
		
		int i = arrOne.length - 1;
		int j = arrTwo.length - 1;
		int k = arrSum.length - 1;
		
		
		int c = 0;
		
		while(k >= 0)
		{
			 
			int d = c;
			
			if(i >= 0)
			{
				d = d + arrOne[i];
			}
			
			if(j >= 0)
			{
				d = d + arrTwo[j];
			}
			
			c = c / 10;
			d = d % 10;
			
			arrSum[k] = d;
			
		
			
			i--;
			j--;
			k--;
			
		}
		
		if(c!=0)
		{
			System.out.println(c);
		}
		
		Display(arrSum);
		
	}

}
