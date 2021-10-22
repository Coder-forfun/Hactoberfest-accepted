import java.util.Scanner;


public class SpanOfArray {
	
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int tc = scn.nextInt();
		
		int arr[] = new int[tc];
		
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		
		for (int i = 0; i < arr.length; i++) {
			 arr[i] = scn.nextInt();
			 
			 if(arr[i]>max)
			 {
				 max = arr[i];
			 }
			 
			 if(arr[i]<min)
			 {
				 min = arr[i];
			 }
		}
		
		System.out.println(max-min);
		
		
	}

}
