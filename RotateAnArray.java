import java.util.Scanner;

public class RotateAnArray {

	public static void rotate(int[] a , int k){
		
		k = k % a.length;
	    if(k < 0)
	    {
	        k = k + a.length;
	    }
	    
	    //Part 1
	    reverse(a, 0 , a.length-k-1);
	    
	    //Part 2
	    reverse( a, a.length-k ,a.length-1);
	    
	    //Part 1 + Part2
	    
	    reverse(a , 0 , a.length-1);
		
	  }
	
	public static void rotate2(int[] a , int k)
	{
		int[] b = new int[a.length];
	    int j = 0;
	    

	    if (k > 0) {
	      k = k % a.length;
	      if(k == 0){
	          return;
	      }
//	      if(a.length%k!=0 && k!=1)
//	      {
//	    	  k=k-1;
//	      }
	      for (int i = k-1 ; i < a.length; i++) {
	        b[j] = a[i];
	        j++;
	      }
	      for (int i = 0; i < k-1 ; i++) {
	        b[j] = a[i];
	        j++;
	      }
	    }
	    else if(k < 0) {
	      k = k * -1;
	      k = k % a.length;
	      if(k == 0){
	          return;
	      }
	      if(a.length%k!=0)
	      {
	    	  k=k-1;
	      }
	      for (int i = k; i < a.length; i++) {
	        b[j] = a[i];
	        j++;
	      }
	      for (int i = 0; i < k; i++){
	        b[j] = a[i];
	        j++;
	      }
	    }
	    else{
	        return;
	    }
	    for(int i = 0;i < a.length;i++){
	        a[i] = b[i];
	    }
	}
	
public static void reverse(int[] a,int start , int length){
	    
	int low = start;
    int high = length;
    
    while(low < high)
    {
        
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        
        low++;
        high--;
        
    }
    
		
	  }
	
	private static void Display(int arr[])
	{
		for (int val : arr) {
			
			System.out.print(val+" ");
			 
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
		
//		rotate(arr,k);
//		Display(arr);
//		System.out.println();
		rotate2(arr, k);
		Display(arr);
	}
	
}
