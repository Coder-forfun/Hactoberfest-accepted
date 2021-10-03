public class MaximumSubarraySum {
    public static void main(String[] args) {
        int[] arr = {-5, 2, 8, -7};
        System.out.println("Maximum contiguous subarray sum: " + maxSubarraySum(arr));
    }
    private static int maxSubarraySum(int[] arr) {
        int size = arr.length;
        int maxsum = Integer.MIN_VALUE, cursum = 0;
        for(int i = 0; i < size; i++){
            cursum = cursum + arr[i];
            if(maxsum < cursum){
                maxsum = cursum;
            }
            if(cursum < 0){
                cursum = 0;
            }
        }
        return  maxsum;
    }
}
