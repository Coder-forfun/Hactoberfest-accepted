public class RotateArray {
    public static void main(String[] args) {
        int[] arr = {1,4,3,6,7,9};
        int n = arr.length;
        printArray(arr,n);
        System.out.println();
        rightRotateByOne(arr,n);
        printArray(arr,n);
        System.out.println();
        leftRotateByOne(arr,n);
        printArray(arr,n);
    }
    private static void rightRotateByOne(int[] arr, int n) {
        int temp = arr[n-1];
        int i;
        for(i = n-1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[i] = temp;
    }
    private static void leftRotateByOne(int[] arr, int n) {
        int temp = arr[0];
        int i;
        for(i = 0; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[i] = temp;
    }
    private static void printArray(int[] arr, int n) {
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
    }
}
