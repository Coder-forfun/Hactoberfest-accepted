//Bubble Sort in Ascending Order
import java.util.*;
public class BubbleSort 
{
    public static void main(String args[])
    {
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter the size of array : ");
	int l= sc.nextInt();
	int arr[]=new int[l];
	System.out.println("Enter the array elements");
	for (int i=0; i<l;i++)
	{
	    arr[i]=sc.nextInt();
	}
        System.out.println("The unsorted array is: ");
	for (int i=0; i<l;i++)
	{
            System.out.print(arr[i]+" ");
	}
        bubble_sort(arr);	
        System.out.println("\nThe Sorted Array in Ascending Order after performing Bubble Sort is: ");
	for (int i=0; i<l;i++)
	{
            System.out.print(arr[i]+" ");
	}      
    }
    public static void bubble_sort(int a[])
    {
        int n = a.length;
        for(int i = 0;i<n-1;i++)
        {
            for (int j=0;j<n-i-1;j++)
            {
                if (a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
}
