import java.util.Scanner;

public class FloorAndCiel {
	
	public static void floorAndCiel(int[] a,int k){
	    
		int low = 0;
		int high = a.length-1;
		
		int ciel = Integer.MIN_VALUE;
		int floor = Integer.MAX_VALUE;
		
		
		
		
		while(low <= high)
		{
			
			int mid = (low+high)/2;
			if(k<a[mid])
			{
				high = mid -1;
				floor = a[high];
			}
			else if(k>a[mid])
			{
				low = mid + 1;
				ciel = a[low];
			}
			else
			{
			
				floor = ciel = a[mid];
				System.out.println(ciel);
				System.out.println(floor);
				return ;
			}
			
		}
		System.out.println(ciel);
		System.out.println(floor);
		return ;
			
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
			
			
			int k = scn.nextInt();
			
			floorAndCiel(arr,k);
			
			
		}

}
