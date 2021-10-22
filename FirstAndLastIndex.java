import java.util.Scanner;

public class FirstAndLastIndex {
	
	public static int firstIndex(int[] a,int k){
	    
		int low = 0;
		int high = a.length-1;
		

		
		int fi = -1;
		
		while(low <= high)
		{
			
			int mid = (low+high)/2;
			if(k<a[mid])
			{
				high = mid -1;
			}
			else if(k>a[mid])
			{
				low = mid + 1;
			}
			else
			{
				fi = mid;
				high = mid - 1;
			}
			
		}
		return fi;
			
		  }
		
public static int lastIndex(int[] a,int k){
	    
		int low = 0;
		int high = a.length-1;
		

		
		int li = -1;
		
		while(low <= high)
		{
			
			int mid = (low+high)/2;
			if(k<a[mid])
			{
				high = mid -1;
			}
			else if(k>a[mid])
			{
				low = mid + 1;
			}
			else
			{
				li = mid;
				low = mid + 1;
			}
			
		}
		return li;
			
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
			
			int firstIndex = firstIndex(arr,k);
			int lastIndex  = lastIndex(arr,k);
			System.out.println(firstIndex);
			System.out.println(lastIndex);
			
		}


}
