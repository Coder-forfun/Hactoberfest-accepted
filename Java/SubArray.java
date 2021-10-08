import java.util.Arrays;

public class SubArray {
    public static void main(String[] args) {
        System.out.println("All Non-empty Subarrays");
        subArray(arr.length);
        }
        static int[] arr = new int[]{1,2,3,4,5};
    static  void subArray(int n){
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                for(int k = i; k <= j; k++){
                    System.out.print(arr[k] + " ");
                }
                System.out.println();
            }
        }
    }
}
