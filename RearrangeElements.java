public class RearrangeElements {
    public static void main(String[] args) {
        Integer[] arr = {-12,2,-4,-5,3,6,-7};
        int n = arr.length;
        rearrange(arr,n);
        printarray(arr,n);
    }
    private static void rearrange(Integer[] arr, int n) {
        int j = 0, temp;
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                if(i != j){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
            }
        }
    }
    private static void printarray(Integer[] arr, int n) {
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
