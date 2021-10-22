import java.util.Scanner;

public class BinarySearch {
	
public static int binarySearch(int[] a,int k){
	    
	int low = 0;
	int high = a.length-1;
	

	
	int ans = -1;
	
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
			ans = mid;
			return ans;
		}
		
	}
	return ans;
		
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
		
		int ans = binarySearch(arr,k);
		System.out.println(ans);
		
	}

}
