import java.util.Arrays;
import java.util.Collections;

public class KthLargestElement {
    public static void main(String[] args) {
        Integer[] array = {2, 5, 4, 1, 9, 20, 6};
        int k = 5;
        System.out.println("Kth largest element is: "+ kthLargest(array,k));

    }
    public  static  int kthLargest(Integer[] arr,int k){
        //sort the array
        Arrays.sort(arr,Collections.reverseOrder());
        //return kth element from sorted array
        return arr[k-1];
    }
}
