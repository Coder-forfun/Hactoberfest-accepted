import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        int i;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter Array elements= ");
        for (i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Array elements= ");
        for (i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        System.out.print("ReversedArray elements= ");
        for(i=n-1;i>=0;i--){
            System.out.print(arr[i] + " ");
        }
    }
}
      
