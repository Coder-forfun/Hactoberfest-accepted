import java.util.Scanner;

public class DifferenceOfTwoArray {
	
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
	
		
	
		
		int arrDiff[] = new int[tcTwo ];
		
		int i = arrOne.length - 1;
		int j = arrTwo.length - 1;
		int k = arrDiff.length - 1;
		
		
		int c = 0;

		while(k >= 0)
		{

	
		   int d = c;
		   
		   int a1v = i >= 0? arrOne[i]:0;
		   
		   if( arrTwo[j]+c>=a1v)
		   {
		       d = arrTwo[j]+c - a1v;
		       c = 0;
		   }
		   else
		   {
		       d = arrTwo[j]+ c + 10 - a1v;
		       c= -1;
		   }
			    	
			    	arrDiff[k] = d;
			    	
			    	i--;
			    	j--;
			    	k--;
			    }
			

		int idx = 0;
		while(idx < arrDiff.length)
		{
			if(arrDiff[idx] == 0)
			{
				idx++;
			}
			else
			{
				break;
			}
		}
		
		while(idx < arrDiff.length)
		{
			System.out.println(arrDiff[idx]);
			idx++;
		}

//		Display(arrDiff);
	}

}
