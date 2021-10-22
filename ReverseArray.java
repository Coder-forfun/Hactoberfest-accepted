import java.util.Scanner;

public class ReverseArray {
	
	public static void reverse(int[] a){
	    
		for (int i = 0; i < a.length/2; i++) {
			
			int n = a.length;
			
		    int tmp;
		       
		    tmp = a[i];
		    
		    a[i] = a[n-i-1];
		    
		    a[n-i-1]=tmp;
			
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
		Display(arr);
		reverse(arr);
		Display(arr);
	}

}
