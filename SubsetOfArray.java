/import java.util.Scanner;

public class SubsetOfArray {
	
	public static void subset(int[] a)
	{
		int limit = (int)Math.pow(2, a.length);
		
		for(int i = 0 ; i<limit ; i++)
		{
			String set = "";
			int temp = i ;
			for(int j = a.length -1 ; j>= 0 ; j--)
			{
				int r = temp % 2;
				temp = temp / 2;
				
				if( r == 0)
				{
					set = "-\t" + set;
				}
				else
				{
					set = a[j] + "\t" + set;
				}
			}
			System.out.println(set);
		}
	}
	
	public static void main(String[] args) {
		

		Scanner scn = new Scanner(System.in);
		
		int tc = scn.nextInt();
		
		int arr[] = new int[tc];
	
		for (int i = 0; i < arr.length; i++) {
			
			arr[i] = scn.nextInt();
			 
		}	
		
		subset(arr);
	}

}
