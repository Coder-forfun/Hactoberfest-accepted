import java.util.Scanner;
public class SubArray {
	
public static void subArray(int[] a){
	    
		for (int i = 0; i < a.length; i++) {
			
			for(int j = i ; j < a.length;j++)
			{
				
				for(int k = i ; k <= j;k++)
				{
					System.out.print(a[k]+"\t");
				}
				System.out.println();
			}
			
			
		}
		
	  }
	
	private static void Display(int arr[])
	{
		for (int val : arr) {
			
			System.out.println(val);
			 
		}	
	}
	
	public static void main(String[] args) {
		
		
		Scanner scn = new Scanner(System.in);
		
		int tc = scn.nextInt();
		
		int arr[] = new int[tc];
	
		for (int i = 0; i < arr.length; i++) {
			
			arr[i] = scn.nextInt();
			 
		}	
		
		subArray(arr);
		
	}
	

}
