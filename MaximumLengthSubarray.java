public class MaximumLengthSubarray {
    public static void main(String[] args) {
        int[] arr = {1,4,4,5};
        int n = arr.length;
        System.out.println(longestSubarray(arr,n));
    }

    private static int longestSubarray(int[] arr, int n) {
        int j = 1, e = 0, i = 0;
        for(i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                j += 1;
            }
            else{
                j = 1;
            }
            if(e < j){
                e = j;
            }
        }
        return e;
    }
}
