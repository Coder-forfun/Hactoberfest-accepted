import java.util.Scanner;

public class InverseOfArray {
	
	private static void Display(int arr[])
	{
		for (int val : arr) {
			
			System.out.println(val);
			 
		}	
	}
	
	public static int[] inverse(int[] a){
		
		int[] inv = new int[a.length]; 
		
		for (int i = 0; i < a.length; i++) {

			int num = a[i];
			inv[num]=i;
			
		}
		return inv;
	  }
	
public static void main(String[] args) {
		
		
		Scanner scn = new Scanner(System.in);
		
		int tc = scn.nextInt();
		
		int arr[] = new int[tc];
	
		for (int i = 0; i < arr.length; i++) {
			
			arr[i] = scn.nextInt();
			 
		}	
		
		int[] inv = inverse(arr);
		Display(inv);
	}

}
